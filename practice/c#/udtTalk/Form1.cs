using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Linq.Expressions;
using System.Speech.Synthesis;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using System.Net.NetworkInformation;
using Emgu.CV;
using Emgu.CV.CvEnum;
using Emgu.CV.Util;
using System.IO;

namespace udtTalk
{
    public partial class Form1 : Form
    {
        private Socket UdpServer;
        private IPEndPoint Listen_IPEndPoint;

        private EndPoint Remote;
        private int LocalPort = 9999;
        private string BroadCast;
        private string UserName;

        delegate void StringArgReturningVoidDelegate(string text);
        private SpeechSynthesizer synth = new SpeechSynthesizer();

        private VideoCapture _capture;
        private Mat _frame;



        public Form1()
        {
            InitializeComponent();
            txtPort.Text = LocalPort.ToString();
        }
        private IPAddress GetLocalIPAddress()
        {
            var host = Dns.GetHostEntry(Dns.GetHostName());
            foreach (var ip in host.AddressList)
            {
                if (ip.AddressFamily == AddressFamily.InterNetwork)
                {
                    return ip;
                }
            }

            throw new Exception("No network adapters with an IPv4 address in the system!");
        }
        /*
        private void StartWebCam()
        {
            _capture = new VideoCapture();
            _frame = new Mat();
            Application.Idle += ProcessFrame;
        }

        private void ProcessFrame(object sender, EventArgs e)
        {
            _capture.Read(_frame);

            using (VectorOfByte buf = new VectorOfByte())
            {
                CvInvoke.Imencode(".bmp", _frame, buf);
                pictureBox1.Image = new Bitmap(new MemoryStream(buf.ToArray()));
            }

            // 영상 송신
            SendVideoFrame(_frame, txtSendToIp.Text, LocalPort);
        }

        private void SendVideoFrame(Mat frame, string broadcast, int port)
        {
            if (UdpServer != null)
            {
                using (VectorOfByte buf = new VectorOfByte())
                {
                    CvInvoke.Imencode(".jpg", frame, buf);
                    byte[] imageData = buf.ToArray();

                    // 이미지 데이터를 전송합니다.
                    IPEndPoint Sender = new IPEndPoint(IPAddress.Parse(broadcast), port);
                    UdpServer.SendTo(imageData, imageData.Length, SocketFlags.None, Sender);
                }
            }
        }



        private void StopWebCam()
        {
            Application.Idle -= ProcessFrame;
            _capture.Dispose();
            _frame.Dispose();
        }
        */

        private void SetText(string text)
        {
            if (this.MsgWindow.InvokeRequired)
            {
                StringArgReturningVoidDelegate d = new StringArgReturningVoidDelegate(SetText);
                this.Invoke(d, new object[] { text });
            }
            else
            {
                this.MsgWindow.AppendText(text);
                MsgWindow.ScrollToCaret();
            }
        }
        private void threadProc()
        {
            try
            {
                int receive;
                string message;
                byte[] rxBytes = new byte[2048];

                while (true)
                {
                    receive = UdpServer.ReceiveFrom(rxBytes, ref Remote);
                    message = Encoding.UTF8.GetString(rxBytes, 0, receive);
                    SetText(message + "\r\n");
                    Thread.Sleep(500);
                }
            }
                catch (Exception ex)
                {
                MessageBox.Show(ex.ToString());
                DisConnect();
                }
        }

        private void InterConnect()
        {
            LocalPort = Convert.ToInt32(txtPort.Text,10);
            UserName = txtMyName.Text;
            UdpServer = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);

            Listen_IPEndPoint = new IPEndPoint(IPAddress.Any, LocalPort);
            Remote = (EndPoint)Listen_IPEndPoint;
            UdpServer.Bind(Listen_IPEndPoint);

            Thread thread = new Thread(new ThreadStart(threadProc));

            thread.IsBackground = true;
            thread.Start();

            IPAddress localIP = GetLocalIPAddress();

            SetText("연결됨 - " + localIP + " \r\n");
            btnConnect.Text = "연결해제";
        }

        private void DisConnect()
        {
            Thread.EndThreadAffinity();

            // UdpServer가 null이 아닐 때만 dispose
            if (UdpServer != null)
            {
                UdpServer.Dispose();
                UdpServer = null; // UdpServer를 null로 설정하여 추후 사용을 방지
            }

            SetText("연결 해제 -\r\n");
            btnConnect.Text = "연결";
        }
        
        private void SendProc(string broadcast, string user, String msg)
        {
            try
            {
                IPEndPoint Sender = new IPEndPoint(IPAddress.Parse(broadcast), LocalPort);
                byte[] SendData = Encoding.UTF8.GetBytes(user + " > " + msg + "\n");
                UdpServer.SendTo(SendData, SendData.Length, SocketFlags.None, Sender);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            if (btnConnect.Text == "연결") InterConnect();
            else DisConnect();
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            BroadCast = txtSendToIp.Text;
            SendProc(BroadCast, UserName, txtSendMsg.Text);
            txtSendMsg.Text = "";
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            DisConnect();   
        }

        private void btnRead_Click(object sender, EventArgs e)
        {
            if (MsgWindow.Text.Length > 0)
            {
                synth.Speak(MsgWindow.Text);
            }
            else
            {
                synth.Speak("메시지를 넣어주세요");
            }
        }

        private void txtSendMsg_KeyPress(object sender, KeyPressEventArgs e)
        {
            
            if (e.KeyChar == (char)13) 
            {
               
                BroadCast = txtSendToIp.Text;
                SendProc(BroadCast, UserName, txtSendMsg.Text);
                txtSendMsg.Text = "";

                
                e.Handled = true;
            }
        }

        private void btnDiscon_Click(object sender, EventArgs e)
        {
            DisConnect();
            this.Close();
        }
    }
}
