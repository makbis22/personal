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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace _230329EXbeam
{
    public partial class Form1 : Form
    {
        SerialPort ComPort = new SerialPort();
        private delegate void SetTextDelegate(string getString);
        Graphics g;
        private Point Center;
        private double radius;
 

        public Form1()
        {
            InitializeComponent();
            ComPort.DataReceived += new SerialDataReceivedEventHandler(DataReceived);

        }
        private void DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = ComPort.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] { rxd });
        }

        private void SerialReceived(string inString)
        {
            int PPM=0;

            string Head = inString.Substring(0, 1);
            string Data = inString.Substring(1);
            string[] PasingData = Data.Split(',');
            if (Head == "$")
            {
                int temp = Convert.ToInt16(PasingData[0]);
                int humi = Convert.ToInt16(PasingData[1]);
                PPM = Convert.ToInt16(PasingData[2]);
                
                label1.Text = temp.ToString();
                label2.Text = humi.ToString();
                label3.Text = PPM.ToString();

                tempBar.Value = temp;
                humiBar.Value = humi;
            }

            panel1.Refresh();

            
            double HandsAngle = 2 * Math.PI * ((PPM * (180.0 / 1000.0)) - 180) / 360;
            int HandsX = Center.X + (int)(radius * Math.Cos(HandsAngle));
            int HandsY = Center.Y + (int)(radius * Math.Sin(HandsAngle));
            Pen p = new Pen(Brushes.Navy, 4);
            g.DrawLine(p, HandsX, HandsY, Center.X, Center.Y);

           
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            cmbComPort.Items.Clear();
            var portname = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portname);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;

            g = panel1.CreateGraphics();

            Center = new Point(panel1.Width / 2, (int)(panel1.Height * (71.0 / 100.0)));
            radius = (panel1.Height * (37.0 / 100.0));

        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            if (btnConnect.Text == "Connect")
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
                    btnConnect.Text = "Close";
                    Status.Text = "Port Open";
                }
            }
            else
            {
                ComPort.Close();
                Status.Text = "Port Close";
                btnConnect.Text = "Connect";
            }

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

        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {

        }
    }
}


