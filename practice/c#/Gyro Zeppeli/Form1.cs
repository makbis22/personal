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
using Draw3Dbox;
using System.Xml.Serialization;

namespace Gyro_Zeppeli
{
    public partial class Form1 : Form
    {
        SerialPort ComPort = new SerialPort();
        private delegate void SetTextDelegate(string getString);

        Cube cube;
        private float Xaxis = 0;
        private float Yaxis = 0;
        private float Zaxis = 0;

        public Form1()
        {
            InitializeComponent();
            ComPort.DataReceived += new SerialDataReceivedEventHandler(DataReceived);
            
        }
        private void DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = ComPort.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] {rxd });
        }

        private void SerialReceived(string inSrting)
        {
            string Code = inSrting.Substring(0,1);
            string Gyro = inSrting.Substring(1);

            if (Code == "@")
            {
                string[] Axis = Gyro.Split(',');

                float Xv = (float)(Convert.ToInt16(Axis[0]) / 150.0);
                float Yv = (float)(Convert.ToInt16(Axis[1]) / 150.0);
                float Zv = (float)(Convert.ToInt16(Axis[2]) / 150.0);

                Xaxis += Xv;
                Yaxis += Yv;
                Zaxis += Zv;

                render();
            }
        }

        private void render()
        {
            cube.RotateX = Xaxis;
            cube.RotateY = Yaxis;
            cube.RotateZ = Zaxis;

            Point origin = new Point(panel1.Width/2,panel1.Height/2);
            panel1.BackgroundImage = cube.drawCube(origin);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbComPort.Items.Clear();
            var portname = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portname);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;

            cube = new Cube(300, 30, 400);
            render();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (ComPort.IsOpen)
            {
                ComPort.Close();
                ComPort.Dispose();
                ComPort = null;
            }
            Status.Text = "Form Closing";
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            if (btnConnect.Text == "Connect")
            {
                if (ComPort.IsOpen) Status.Text = "Already used..";
                else
                {
                    ComPort.PortName = cmbComPort.Text;
                    ComPort.BaudRate = 115200;
                    ComPort.DataBits = 8;
                    ComPort.Parity = Parity.None;
                    ComPort.StopBits = StopBits.One;
                    ComPort.Handshake = Handshake.None;
                    ComPort.Open();
                    ComPort.DiscardInBuffer();
                    btnConnect.Text = "STOP";
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
