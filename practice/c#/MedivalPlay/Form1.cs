using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MedivalPlay
{
    public partial class Form1 : Form
    {
        string[] ShortFileName;
        string[] FullFileName;
        int ListCount = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFile = new OpenFileDialog();

            openFile.Title = "미디어 파일 열기";
            openFile.InitialDirectory = Environment.CurrentDirectory;
            openFile.Filter = "미디어 파일|*.mp3;*.wav|모든 파일 (*.*)|*.*";

            if (openFile.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                Array.Resize(ref ShortFileName, ListCount + 1);
                Array.Resize(ref FullFileName, ListCount + 1);

                ShortFileName[ListCount] = openFile.FileName;
                FullFileName[ListCount] = openFile.FileName;   
                ListCount++;

                listBox1.Items.Clear();
                for (int SelectCount = 0;  SelectCount < ShortFileName.Length; SelectCount++)
                {
                    listBox1.Items.Add(ShortFileName[SelectCount]);
                }
            }
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            int whichSong = listBox1.SelectedIndex;

            axWindowsMediaPlayer1.URL = FullFileName[whichSong];
        }
    }
}
