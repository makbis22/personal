using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net.Security;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SCV_File
{
    public partial class form1 : Form
    {
        public string csvFileName;
        public StreamWriter csvStream;
        public string strMessage;
        public int RndVal;
        public Random rnd = new Random();

        public bool CSV_Init()
        {
            csvFileName = Environment.CurrentDirectory + "\\" + DateTime.Now.ToString("yyyy-MM-dd") + ".csv";
            csvStream = File.AppendText(csvFileName);
            if (File.Exists(csvFileName) == true ) {
                strMessage = DateTime.Now.ToString("HH:mm:ss")+","+"#"+","+"on system";
                return true;
            }
            else
                return false;

        }

        public void CSV_Close()
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + "off system";
                csvStream.WriteLine(strMessage);
                csvStream.Close();
            }
        }

        public void CSV_Start()
        {
            if (File.Exists (csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + "start system";
                csvStream.WriteLine(strMessage);
                strMessage = "Time,Class,Data";
                csvStream.WriteLine(strMessage);

            }
        }

        public void CSV_Pause()
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + "Stop System";
                csvStream.WriteLine(strMessage);
            }
        }

        public void CSV_Write(int Data)
        {
            if (File.Exists(csvFileName) == true)
            {
                strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + Data.ToString();
                csvStream.WriteLine(strMessage);
            }
            else
            {
                csvFileName = Environment.CurrentDirectory + "\\" + DateTime.Now.ToString("yyyy-MM-dd") + ".csv";
                csvStream = File.AppendText(csvFileName);
                if (File.Exists(csvFileName) == true)
                {
                    strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + "off system";
                    csvStream.WriteLine(strMessage);
                    strMessage = DateTime.Now.ToString("HH:mm:ss") + "," + "#" + "," + Data.ToString();
                    csvStream.WriteLine(strMessage);

                }
                lblFilePath.Text = csvFileName;
            }
        }

        public form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            RndVal = rnd.Next(100);
            lblData.Text = RndVal.ToString();
            CSV_Write(RndVal);
        }

        private void form1_Load(object sender, EventArgs e)
        {
            if (CSV_Init())
            {
                lblFilePath.Text = csvFileName;

            }
            else
            {
                lblFilePath.Text = "Failed csv File";
            }
        }

        private void form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            CSV_Close();
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            if (btnStart.Text == "Start")
            {
                CSV_Start();
                timer1.Start();
                btnStart.Text = "Stop";
            }
            else
            {
                timer1.Stop();
                CSV_Pause();
                btnStart.Text = "Start";
            }
        }
    }
    
}
