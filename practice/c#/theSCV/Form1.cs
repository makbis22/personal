using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;
using System.Reflection.Emit;

namespace theSCV
{
    public partial class lblComPort : Form
    {
        public string csvFileName;
        public StreamWriter csvStream;
        public string strMessage;
       // public int RndVal;
       // public Random rnd = new Random();

        SerialPort ComPort = new SerialPort();
        private delegate void SetTextDelegate(string getString);

        public int globalTemp =0;
        public int globalHumi=0;
        public int globalPPM = 0;


        private void DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = ComPort.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] { rxd });
        }

  

        private void SerialReceived(string inString)
        {
            
            string Head = inString.Substring(0, 1);
            string Data = inString.Substring(1);
            string[] PasingData = Data.Split(',');
            if (Head == "$")
            {
                globalTemp = Convert.ToInt16(PasingData[0]);
                globalHumi = Convert.ToInt16(PasingData[1]);
                globalPPM = Convert.ToInt16(PasingData[2]);

                lblTemp.Text = globalTemp.ToString();
                lblHumi.Text = globalHumi.ToString();
                lblPPM.Text = globalPPM.ToString();

              
            }

        }


        public bool CSV_Init()
        {
            csvFileName = Environment.CurrentDirectory + "\\" + DateTime.Now.ToString("yyyy-MM-dd") + ".csv";
            csvStream = File.AppendText(csvFileName);
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#"+"@"+"#" + "," + "on system";
                return true;
            }
            else
                return false;

        }
        public void CSV_Pause()
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "@" + "#" + "," + "Stop System";
                csvStream.WriteLine(strMessage);
            }
        }

        public void CSV_Write(int dataPPM, int dataTemp, int dataHumi)
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + dataPPM.ToString() + "," + dataTemp.ToString() + "," + dataHumi.ToString();
                csvStream.WriteLine(strMessage);
            }
            else
            {
                csvFileName = Environment.CurrentDirectory + "\\" + DateTime.Now.ToString("yyyy-MM-dd") + ".csv";
                csvStream = File.AppendText(csvFileName);
                if (File.Exists(csvFileName) == true)
                {
                    strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "@" + "#" + "," + "off system";
                    csvStream.WriteLine(strMessage);
                    strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + dataPPM.ToString() + "," + dataTemp.ToString() + "," + dataHumi.ToString();
                    csvStream.WriteLine(strMessage);

                }
                lblFilePath.Text = csvFileName;
            }
        }


        public void CSV_Start()
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "@" + "#" + "," + "start system";
                csvStream.WriteLine(strMessage);
                strMessage = "Time,PPM,Temp,Humi";
                csvStream.WriteLine(strMessage);

            }
        }


        public void CSV_Close()
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "@" + "#" + "," + "off system";
                csvStream.WriteLine(strMessage);
                csvStream.Close();
            }
        }

 
        
       /* public String SerialList()
        {
            string [] arr = System.IO.Ports.SerialPort.GetPortNames();
            


            return 
        }*/



        public lblComPort()
        {
            InitializeComponent();

            ComPort.DataReceived += new SerialDataReceivedEventHandler(DataReceived);

        }
   

        private void Form1_Load(object sender, EventArgs e)
        {
            if (CSV_Init())
            {
                lblFilePath.Text = csvFileName;

            }
            else
            {
                lblFilePath.Text = "Failed csv File";
            }

            //labelComport.Text = SerialList();

            cmbComPort.Items.Clear();
            var portname = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portname);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;






        }

        private void timer1_Tick(object sender, EventArgs e)
        {


            lblTime.Text = DateTime.Now.ToString("HH:mm:ss");
            CSV_Write(globalPPM, globalTemp,globalHumi);

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {

            if (ComPort.IsOpen)
            {
                ComPort.Close();
                ComPort.Dispose();
                ComPort = null;
            }
            Status.Text = "Form Closing..";


            CSV_Close();

        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            if (btnStart.Text == "START")
            {
                if (ComPort.IsOpen) Status.Text = "Already used..";
                else
                {
                    ComPort.PortName = cmbComPort.Text;
                    ComPort.BaudRate = 9600;
                    ComPort.DataBits = 8;
                    ComPort.Parity = Parity.None;
                    ComPort.StopBits = StopBits.One;
                    ComPort.Handshake = Handshake.None;
                    ComPort.Open();
                    ComPort.DiscardInBuffer();
                    btnStart.Text = "STOP";
                    Status.Text = "Port Open";
                }

                CSV_Start();
                timer1.Start();
                btnStart.Text = "STOP";
            }
            else
            {
                ComPort.Close();
                Status.Text = "Port Close";
                timer1.Stop();
                CSV_Pause();
                btnStart.Text = "START";
            }

        }
    }
}
