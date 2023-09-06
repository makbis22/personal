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

namespace YamaMotor
{
    public partial class Form1 : Form
    {

        SerialPort ComPort = new SerialPort();
        private delegate void SetTextDelegate(string getString);

        String motion = "";
        String setMotion = "1";
        int speed = 0;
        int setSpeed = 0;

        private void DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = ComPort.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] { rxd });
        }
        private void SerialReceived(string inSrting)
        {
            try
            {
                string Head = inSrting.Substring(0, 1);
                string Data = inSrting.Substring(1, inSrting.Length - 1);
                if (Head == "@")
                {
                    string[] pasingData = Data.Split(',');
                    motion = pasingData[0];
                    speed = Convert.ToInt16(pasingData[1]);
                    Status(motion, speed);
                }
            }
            catch { }



        }

        private void SerialWrite(string motion, int speed)
        {
            if (ComPort.IsOpen)
            {
                string msg = "@" + motion + "," + speed.ToString() + "\n";
                ComPort.Write(msg);
            }
        }

        private void Status(string motion, int speed)
        {
            switch (motion)
            {
                case "0":
                    lblMotion.Text = "STOP"; lblMotion.BackColor = Color.DarkGray; break;
                case "1":
                    lblMotion.Text = "CW"; lblMotion.BackColor = Color.Olive; break;
                case "2":
                    lblMotion.Text = "CCW"; lblMotion.BackColor = Color.GreenYellow; break;
                default:
                    lblMotion.Text = "???"; lblMotion.BackColor = Color.Red; break;
            }
            progressBar1.Value = speed;
            lblSpeed.Text = speed.ToString();
        }

        public Form1()
        {
            InitializeComponent();
            ComPort.DataReceived += new SerialDataReceivedEventHandler(DataReceived);

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbComPort.Items.Clear();
            var portname = System.IO.Ports.SerialPort.GetPortNames();
            cmbComPort.Items.AddRange(portname);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;

            cmbBoardRate.Items.Clear();
            cmbBoardRate.Items.Add("9600");
            cmbBoardRate.Items.Add("19200");
            cmbBoardRate.Items.Add("57600");
            cmbBoardRate.Items.Add("115200");
            cmbBoardRate.SelectedIndex = 0;

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {

            if (ComPort.IsOpen)
            {
                SerialWrite("0", 0);
                ComPort.Close();
            }
            ComPort.Dispose();
            ComPort = null;


        }

        private void button1_Click(object sender, EventArgs e)
        {
            SerialWrite("0", 0);
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {

            if (btnConnect.Text == "Open")
            {

                ComPort.PortName = cmbComPort.Text;
                ComPort.BaudRate = Convert.ToInt32(cmbBoardRate.Text);
                ComPort.DataBits = 8;
                ComPort.Parity = Parity.None;
                ComPort.StopBits = StopBits.One;
                ComPort.Handshake = Handshake.None;
                ComPort.Open();
                ComPort.DiscardInBuffer();
                btnConnect.Text = "Close";

            }
            else
            {
                SerialWrite("0", 0);
                ComPort.Close();
                btnConnect.Text = "Open";
            }
        }

        private void rdoCW_CheckedChanged(object sender, EventArgs e)
        {
            setMotion = "1";
        }

        private void rdoCCW_CheckedChanged(object sender, EventArgs e)
        {
            setMotion = "2";
        }

        private void trackBar1_MouseUp(object sender, MouseEventArgs e)
        {
            setSpeed = trackBar1.Value;
            SerialWrite(setMotion, setSpeed);
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            setSpeed = trackBar1.Value;
            SerialWrite(setMotion, setSpeed);
        }
    }
}
