using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace A_Clock
{
    public partial class Form1 : Form
    {
        Graphics g;

        private Point center;
        private double radius;

        private int hourHands;
        private int minuteHands;
        private int secondHands;

        public Form1()
        {
            InitializeComponent();
        }

        private void form1(object sender, EventArgs e)
        {
            g = panel1.CreateGraphics();

            ClockSetting();
            timer1.Start();
        }

        private void ClockSetting()
        {
            center = new Point(panel1.Width/2, panel1.Height/2);
            radius = panel1.Height/2;

            hourHands = (int)(radius * 0.45);
            minuteHands = (int)(radius * 0.55);
            secondHands = (int)(radius * 0.65);

        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            DateTime now = DateTime.Now;

            panel1.Refresh();

            double secAngle = 2 * Math.PI * (now.Second - 15) / 60;
            double minAngle = 2 * Math.PI * (now.Minute - 15) / 60;
            double hourAnlge = (2 * Math.PI * (now.Hour - 15) / 12)*(minAngle/12);

            int HrX = center.X + (int)(hourHands * Math.Cos(hourAnlge));
            int HrY = center.Y + (int)(hourHands * Math.Sin(hourAnlge));
            Pen p = new Pen(Brushes.Black, 6);
            g.DrawLine(p, HrX, HrY,center.X,center.Y);

            int Minx = center.X + (int)(minuteHands * Math.Cos(minAngle));
            int MinY = center.Y + (int)(minuteHands * Math.Sin(minAngle));
            p = new Pen(Brushes.Black, 3);
            g.DrawLine(p, Minx, MinY, center.X, center.Y);

            int Secx = center.X + (int)(secondHands * Math.Cos(secAngle));
            int SecY = center.Y + (int)(secondHands * Math.Sin(secAngle));
            p = new Pen(Brushes.Black, 3);
            g.DrawLine(p, Secx, SecY, center.X, center.Y);

            Rectangle core = new Rectangle(center.X-8, center.Y-8,16,16);
            g.FillEllipse(Brushes.Black, core);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }


}
