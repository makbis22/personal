using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomGiraff
{
   
    public partial class Form1 : Form
    { 
        int rndVal;
        Random rnd = new Random();
        int sweepIndex = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void DataGeneration()
        {
            rndVal = rnd.Next(100);
            chart1.Series["Series1"].Points.Add(rndVal);
            /*if (chart1.Series["Series1"].Points.Count>50)
                chart1.Series["Series1"].Points.Clear();*/
            /*if (chart1.Series["Series1"].Points.Count>50)
               chart1.Series["Series1"].Points.RemoveAt(0);*/
            if (chart1.Series["Series1"].Points.Count > 50)
            {
                // 기존 데이터를 덮어쓰기 위해 인덱스를 사용합니다.
                chart1.Series["Series1"].Points[sweepIndex].SetValueY(rndVal);

                // 다음 데이터 위치로 인덱스를 이동시킵니다.
                sweepIndex++;

                // 인덱스가 차트의 최대 데이터 개수를 초과하면 인덱스를 초기화합니다.
                if (sweepIndex >= 50)
                {
                    sweepIndex = 0;
                }
            }
            else
            {
                // 데이터 포인트가 50개 미만인 경우, 데이터를 추가합니다.
                chart1.Series["Series1"].Points.AddY(rndVal);
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Interval = 100;
            timer1.Stop();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (timer1.Enabled == true)
            {
                timer1.Stop();
                button1.Text = "RUN";
            }
            else
            {
                button1.Text = "STOP";
                timer1.Start();
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            DataGeneration();
        }
    }
}
