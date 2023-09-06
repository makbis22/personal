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

namespace GasGasMeter_v0
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
            panel1.Refresh();

            int PPM = Convert.ToInt16(inString.Substring(2, inString.Length - 2));
            double HandsAngle = 2 * Math.PI * ((PPM * (180.0 / 1000.0)) - 180) / 360;
            int HandsX = Center.X + (int)(radius*Math.Cos(HandsAngle));
            int HandsY = Center.Y + (int)(radius* Math.Sin(HandsAngle));
            Pen p = new Pen(Brushes.Navy, 4);
            g.DrawLine(p,HandsX,HandsY,Center.X,Center.Y);

            label1.Text = PPM.ToString();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            cmbComPort.Items.Clear();
            var portname = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portname);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;

            g= panel1.CreateGraphics();

            Center = new Point(panel1.Width/2,(int)(panel1.Height * (71.0 / 100.0)));
            radius = (panel1.Height * (50.0 / 100.0));

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
    }
}
