using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using MetroFramework;
using MetroFramework.Forms;
using System.IO;
using System.Net;
using MySql.Data;
using System.Net.Http;
using Newtonsoft.Json;
using System.Security.Cryptography.X509Certificates;
using System.Diagnostics;
using Emgu.CV.Structure;
using Emgu.Util;
using Emgu.CV;
using System.IO.Ports;
using WebSocketSharp;
using Emgu.CV.Freetype;
using CefSharp;
using System.Data.SqlClient;
using Newtonsoft.Json.Linq;
using System.Web;

namespace winformdbg3
{
    public partial class MainForm : MetroForm
    {
        private static readonly HttpClient client = new HttpClient
        {
            Timeout = TimeSpan.FromMinutes(5)  // Set timeout to 5 minutes
        };
        // 소켓 고갈 방지 목적의 클래스 레벨 선언
        private System.Timers.Timer _timer;
        private string arduinoIP = "192.168.100.128";
        private string DBIP = "175.205.128.9:9797";
        private string JsIP = "192.168.0.8:8800";

        

        private int minHumid;
        private int maxHumid;

        private WebSocket ws;

        public async Task getHumid()
        {
            
            string response = await client.GetStringAsync("http://" + arduinoIP + "/humidRange");
            var queryDict = System.Web.HttpUtility.ParseQueryString(response);
            minHumid = int.Parse(queryDict["minHumid"]);
            maxHumid = int.Parse(queryDict["maxHumid"]);

            // Use Invoke to update the UI on the UI thread
            this.Invoke((MethodInvoker)delegate
            {
                lblMinHumid.Text = minHumid + "%";
                lblMaxHumid.Text = maxHumid + "%";
            });
        }


        public async Task SetControlModeAsync()
        {
            using (HttpClient client = new HttpClient())
            {
                string url = "http://" + DBIP + "/getModeState.php";
                string responseString = await client.GetStringAsync(url);
                JObject json = JObject.Parse(responseString.Trim());

                // Invoke를 사용하여 UI 스레드에서 컨트롤 상태를 변경합니다.
                this.Invoke((Action)(() =>
                {
                    tglFan.Checked = (string)json["fan"] == "on";
                    tglHumid.Checked = (string)json["usonic"] == "on";
                    tglLamp.Checked = (string)json["lamp"] == "on";
                    

                  
                }));
            }
        }

        public MainForm()
        {
            InitializeComponent();
            StartTimer();

        }

        private async void  Form1_Load(object sender, EventArgs e)
        {


            pbOriginal.Image = null;
            ws = new WebSocket("ws://" + JsIP);
            ws.OnMessage += (s, msg) =>
            {
                if (msg.IsBinary)
                {
                    using (var ms = new MemoryStream(msg.RawData))
                    {
                        var originalBitmap = new Bitmap(ms);
                        var resizedBitmap = new Bitmap(384, 288);
                        using (var g = Graphics.FromImage(resizedBitmap))
                        {
                            g.DrawImage(originalBitmap, 0, 0, 384, 288);
                        }
                        this.Invoke((Action)(() =>
                        {
                            pbOriginal.Image = resizedBitmap;
                        }));
                    }
                }
            };
            ws.ConnectAsync();

            chromiumWebBrowser1.FrameLoadEnd += (s, args) =>
            {
                // 페이지가 로드된 후에 스크립트를 실행합니다.
                if (args.Frame.IsMain)
                {
                    args.Frame.ExecuteJavaScriptAsync("document.body.style.zoom='47%'");
                }
            };

            chromiumWebBrowser1.Load("http://" + JsIP);

            await SetControlModeAsync();
            //await getHumid();

        }


        void StartTimer()
        {
            _timer = new System.Timers.Timer(1000);
            _timer.Elapsed += async (sender, e) =>
            {
                await LoadData();
                //await getHumid();

                // manual mode가 활성화되면 상태 업데이트
                /*if (tglManualMode.Checked)
                {
                    await SetControlModeAsync();
                }*/
            };

            _timer.Start();
        }

        public async Task LoadData()
        {
            string url = "http://"+DBIP+"/getSensorData.php";

            string response = await client.GetStringAsync(url);
            var data = JsonConvert.DeserializeObject<Dictionary<string, object>>(response);

            this.Invoke((MethodInvoker)delegate
            { // 다른 스레드에서 라벨에 접근하기 위한 Invoke

                //crtActivity.Series.Clear();
                //crtActivity.Series.Add("활동량");
                crtActivity.Series["활동량"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;

                lblTemp.Text = data["Temperature"].ToString();

                double humi = Convert.ToDouble(data["Humidity"]);
                string formattedHumi = string.Format("{0:0.0}", humi);
                lblHumi.Text = formattedHumi.PadRight(3, '0');

                double ammo = Convert.ToDouble(data["Ammonium"]);
                string formattedAmmo = string.Format("{0:0.0}", ammo);
                lblAmmo.Text = formattedAmmo.PadLeft(5,'0');

                double co2 = Convert.ToDouble(data["CO2"]) + 300;
                string formattedCo2 = string.Format("{0:0.0}", co2);
                lblCO2.Text = formattedCo2;

                crtActivity.Series["활동량"].Points.AddXY(data["Timestamp"], data["average_activitylevel"]);
                if (crtActivity.Series["활동량"].Points.Count >= 10)
                {
                    crtActivity.Series["활동량"].Points.RemoveAt(0);
                }

            });

        }


        private async Task ControlArduinoAsync(string command, string device = "")
        {
            string commandUrl = $"http://{arduinoIP}/{device}_{command}";
            if (string.IsNullOrEmpty(device))
            {
                commandUrl = $"http://{arduinoIP}/{command}";
            }
            var result = await client.GetStringAsync(commandUrl);
            Console.WriteLine(result);
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            _timer.Stop();
            _timer.Dispose();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            GraphForm graphForm = new GraphForm();
            Debug.WriteLine("그래프폼 열기 시도함");
            graphForm.ShowDialog();

        }

        private async void tglManualMode_CheckedChanged(object sender, EventArgs e)
        {
            if (tglManualMode.Checked)
            {
                // The toggle button is switched on
                await ControlArduinoAsync("manual");
                pbHide.Visible = false;
                
            }
            else
            {
                // The toggle button is switched off
                await ControlArduinoAsync("auto");
                pbHide.Visible=true;
            }
        }

        private async void tglFan_CheckedChanged(object sender, EventArgs e)
        {
            if (tglFan.Checked)
            {
                // The toggle button is switched on
                await ControlArduinoAsync("on", "fan");
            }
            else
            {
                // The toggle button is switched off
                await ControlArduinoAsync("off", "fan");
            }
        }

        private async void tglHumid_CheckedChanged(object sender, EventArgs e)
        {
            if (tglHumid.Checked)
            {
                // The toggle button is switched on
                await ControlArduinoAsync("on", "usonic");
            }
            else
            {
                // The toggle button is switched off
                await ControlArduinoAsync("off", "usonic");
            }
        }

        private async void tglLamp_CheckedChanged(object sender, EventArgs e)
        {
            if (tglLamp.Checked)
            {
                // The toggle button is switched on
                await ControlArduinoAsync("on", "lamp");
            }
            else
            {
                // The toggle button is switched off
                await ControlArduinoAsync("off", "lamp");
            }
        }

        private async void btnExportData_Click(object sender, EventArgs e)
        {
            string url = "http://" + DBIP + "/exportData.php";
            await client.GetAsync(url);
        }

        private void btnSetHumid_Click(object sender, EventArgs e)
        {
            int minHumid = (int)updownMin.Value;
            int maxHumid = (int)updownMax.Value;

            var httpClient = new HttpClient();
            var requestMinHumid = new HttpRequestMessage(HttpMethod.Post, "http://" + arduinoIP + "/minHumid");

            requestMinHumid.Content = new StringContent(minHumid.ToString(), Encoding.UTF8, "application/x-www-form-urlencoded");

            var requestMaxHumid = new HttpRequestMessage(HttpMethod.Post, "http://" + arduinoIP + "/maxHumid");
            requestMaxHumid.Content = new StringContent(maxHumid.ToString(), Encoding.UTF8, "application/x-www-form-urlencoded");

            httpClient.SendAsync(requestMinHumid);
            httpClient.SendAsync(requestMaxHumid);
        }

        private async void btnGetHumid_Click(object sender, EventArgs e)
        {
            await getHumid();
        }
    }
}