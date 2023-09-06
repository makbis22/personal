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

namespace SerialCommunist
{
    public partial class Form1 : Form
    {
        SerialPort comPort = new SerialPort();
        private delegate void SetTextDelegate(string getString);
        public Form1()
        {
            InitializeComponent();
            comPort.DataReceived += new SerialDataReceivedEventHandler(DataReceived);
        }

        private void DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            string rxd = comPort.ReadTo("\n");
            this.BeginInvoke(new SetTextDelegate(SerialReceived), new object[] { rxd });
        }
        /*
        private void SerialReceived(string inString)
        {
            textBox1.AppendText(inString + "\r\n" );
        }*/

        private void SerialReceived(string inString)
        {
            string Head = inString.Substring(0, 1);
            string Data = inString.Substring(1);
            if (Head == "$")
            {
                string[] PasingData = Data.Split(',');
                lblData1.Text = PasingData[0];
                lblData2.Text = PasingData[1];
            }
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            /*
            comPort.PortName = "COM4";
            comPort.BaudRate = 9600;
            comPort.DataBits = 8;
            comPort.Parity = Parity.None;
            comPort.StopBits = StopBits.One;
            comPort.Handshake = Handshake.None;
            comPort.Open();
            comPort.DiscardInBuffer();
            */

            cmbComPort.Items.Clear();
            var portName = System.IO.Ports.SerialPort.GetPortNames();
            //배열 형태로 만들어짐
            //새로운 타입 >> 바리에이션 var
            cmbComPort.Items.AddRange(portName);
            cmbComPort.SelectedIndex = cmbComPort.Items.Count - 1;
            //팁 : 갯수 -1 >> 맨 마지막 인덱스
            cmbBoardRate.Items.Clear();
            cmbBoardRate.Items.Add("9600");
            // 가장 안정적인 레이트
            cmbBoardRate.Items.Add("19200");
            cmbBoardRate.Items.Add("57600");
            cmbBoardRate.Items.Add("115200");
            cmbBoardRate.SelectedIndex = 0;
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (comPort.IsOpen)
            {
                comPort.Close();
                comPort.Dispose();
                comPort = null;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (button1.Text == "Connect")
{
                comPort.PortName = cmbComPort.Text;
                comPort.BaudRate = Convert.ToInt32(cmbBoardRate.Text);
                comPort.DataBits = 8;
                comPort.Parity = Parity.None;
                comPort.StopBits = StopBits.One;
                comPort.Handshake = Handshake.None;
                comPort.Open();
                comPort.DiscardInBuffer();
                button1.Text = "Close";
            }
            else
            {
                comPort.Close();
                button1.Text = "Connect";
                lblData1.Text = " ";
                lblData2.Text = " ";
            }
        }
    }
}
