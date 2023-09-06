using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace HeartBeat
{
    public partial class Form1 : Form
    {
        SerialPort Comport = new SerialPort();
        private delegate void SetTextDelegate(string getString);
        private int pulse;
        public Form1()
        {
            InitializeComponent();
            Comport.DataReceived += new SerialDataReceivedEventHandler(DataReceived);

        }

        private void DataReceived(object sender,System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = Comport.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] {rxd });

        }

        private void SerialReceived(string inString)
        {
            int ppgSignal = Convert.ToInt16(inString.Substring(0, inString.Length -1));
            chart1.Series["Series1"].Points.Add(ppgSignal);
            if (chart1.Series["Series1"].Points.Count > 100)
            {
                chart1.Series["Series1"].Points.Clear();
            }

            string Head = inString.Substring(0,1);
            string Data = inString.Substring(1);
            string[] PasingData = Data.Split(',');
            /*if (Head == "@")
            {
                pulse = Convert.ToInt16(PasingData[0]);
                

                lblTemp.Text = globalTemp.ToString();
                lblHumi.Text = globalHumi.ToString();
                lblPPM.Text = globalPPM.ToString();


            }*/

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbComPort.Items.Clear();
            var portName = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portName);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (Comport.IsOpen)
            {
                Comport.Close();
                Comport.Dispose();
                Comport = null;
            }
            Status.Text = "Closing...";
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            if (btnConnect.Text == "Connect")
            {
                if (Comport.IsOpen) Status.Text = "already used..";
                else
                {
                    Comport.PortName = cmbComPort.Text;
                    Comport.BaudRate = 115200;
                    Comport.DataBits = 8;
                    Comport.Parity = Parity.None;
                    Comport.StopBits = StopBits.One;
                    Comport.Handshake = Handshake.None;
                    Comport.Open();
                    Comport.DiscardInBuffer();
                    btnConnect.Text = "Close";
                    Status.Text = "Port open..";
                }
            }
            else
            {
                Comport.Close();
                Status.Text = "Port Close";
                btnConnect.Text = "Connect";
            }
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            btnSend.Text = (btnSend.Text == "Play") ? "Stop" : "Play";
            SerialWrite();
        }

        private void SerialWrite()
        {
            if (Comport.IsOpen)
            {
               
                string msg = (btnSend.Text == "Stop") ? "@" : "#";
                Comport.Write(msg);
            }
        }

    }
}
