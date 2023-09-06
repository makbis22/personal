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
using System.IO;
using System.Management;

namespace SysInfo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

     
        private void System_ID()
        {
            textBox1.Text = "";
            textBox1.Text += "USER : " + Environment.UserName + "\r\n";
            string host = Dns.GetHostName();
            textBox1.Text += "Host Name : " + host + "\r\n";
            textBox1.Text += "Local IP Address : " + Dns.GetHostByName(host).AddressList[0].ToString() + "\r\n";
            textBox1.Text += "\r\n";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System_ID();
            OS_Info();
            GetSystemInfo();
            Drive_Info();
            Yoons_info();
        }

        private void OS_Info()
        {
            textBox1.Text += "OS Platform : " + Environment.OSVersion.Platform + "\r\n";
            textBox1.Text += "OS Ver : " + Environment.OSVersion + "\r\n";
            if (Environment.Is64BitOperatingSystem) 
                textBox1.Text += "64Bit Operating System" + "\r\n";
            textBox1.Text += "Process Count : " + Environment.ProcessorCount + "\r\n";

            TimeSpan TickTime = TimeSpan.FromMilliseconds(Environment.TickCount);
            textBox1.Text += "System Elapsed Time : " + TickTime.ToString(@"dd\:hh\:mm\:ss") + "\r\n";
            textBox1.Text += "\r\n";

        }

        private void Drive_Info()
        {
            DriveInfo[] AllDrives = DriveInfo.GetDrives();
            foreach (DriveInfo drv in AllDrives) {

                textBox1.Text += "Drive : " + drv.Name + "\r\n";
                textBox1.Text += "   File type : " + drv.DriveType + "\r\n";
                if (drv.IsReady == true)
                {
                    textBox1.Text += "   Volume label : " + drv.VolumeLabel + "\r\n";
                    textBox1.Text += "   File systems : " + drv.DriveFormat + "\r\n";
                    textBox1.Text += string.Format("   Available space to current user : {0:###,##0} bytes \r\n", drv.AvailableFreeSpace);
                    textBox1.Text += string.Format("   Total available space : {0:###,##0} bytes \r\n", drv.TotalFreeSpace);
                    textBox1.Text += string.Format("   Total size of drive : {0:###,##0} bytes \r\n", drv.TotalSize);

                }
                textBox1.Text += "\r\n";

            }
        }

        private void Yoons_info()
        {
            textBox1.Text += "\r\n\r\n/////\r\n\r\n";
            textBox1.Text += "This Program first started in England and gave luck to recipients around the world once a year. Now this letter that has reached you has to leave you within 4 days. You must send 7 copies, including this letter, to the person in need of good luck. You can also make a copy. You may call it superstition, but it is true. British man named YJE received this letter in 1930. He asked his secretary to copy and send it. A few days later, he won the lottery and received 2 billion won. Someone received this letter, but he forgot that it had to leave his hands within 96 hours. He was soon resigned. He only found out about this later and he sent 7 letters, and he got a good job again. President Kennedy of the United States received this letter but simply threw it away. Eventually, nine days later, he was assassinated. Please remember. If you send this letter, there will be 7 years of good fortune, otherwise there will be 3 years of misfortune. And you must never throw away or scribble on this letter. 7 cans. Whoever receives this letter will be lucky. It's hard, but think good is good. 7 years of good luck...";
            textBox1.Text += "\r\n\r\n/////\r\n\r\n";
            textBox1.Text += "<< CODED by Yoon's Labatory >>\r\n\r\n";

        }
        private void GetSystemInfo()
        {
            ManagementObjectSearcher searcher = new ManagementObjectSearcher("SELECT * FROM Win32_Processor");
            foreach (ManagementObject obj in searcher.Get())
            {
                textBox1.Text += "CPU : " + obj["Name"].ToString() + "\r\n\r\n";
            }

            searcher = new ManagementObjectSearcher("SELECT * FROM Win32_PhysicalMemory");
            long memSize = 0;
            foreach (ManagementObject obj in searcher.Get())
            {
                memSize += Convert.ToInt64(obj["Capacity"]);
            }
            textBox1.Text += "RAM : " + (memSize / (1024 * 1024)) + " MB" + "\r\n\r\n";

            searcher = new ManagementObjectSearcher("SELECT * FROM Win32_VideoController");
            foreach (ManagementObject obj in searcher.Get())
            {
                textBox1.Text += "GPU : " + obj["Name"].ToString() + "\r\n\r\n";
            }
        }
    }

}
