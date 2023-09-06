using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Net.WebRequestMethods;

namespace MyNotePad
{
    public partial class Form1 : Form
    {
        string FullName;
        string ShortName;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            ShortName = "제목없음";
            this.Text = ShortName + " - MyNotePad";

        }

        private void mnuEnd_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void mnuName_Click(object sender, EventArgs e)
        {
            richTextBox1.Text = "";
            ShortName = "제목없음";
            this.Text = ShortName + " - MyNotePad";
        }

        private void mnuSaveAs_Click(object sender, EventArgs e)
        {
            saveAsFile(sender, e);
        }

        private void mnuOpen_Click(object sender, EventArgs e)
        {
            OpenFileDialog OpenFile = new OpenFileDialog();

            OpenFile.Title = "열기";
            OpenFile.InitialDirectory = Environment.CurrentDirectory;
            OpenFile.Filter = "텍스트 문서(*.txt)|*.txt|모든 파일(*.*)|*.*";

            if (OpenFile.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                FullName = OpenFile.FileName;
                FileInfo fi = new FileInfo(FullName);
                ShortName= fi.Name;

                this.Text = ShortName + " - MyNotePad";

                richTextBox1.LoadFile (FullName,RichTextBoxStreamType.PlainText);

            }
        }

        private void mnuSave_Click(object sender, EventArgs e)
        {
            SaveFileDialog SaveFile = new SaveFileDialog();

            if (ShortName == "제목없음")
            {
                saveAsFile(sender, e);
            }
            else
            {
                richTextBox1.SaveFile(FullName,RichTextBoxStreamType.PlainText);
            }
        }
        private void saveAsFile(object sender, EventArgs e)
        {
            SaveFileDialog SaveFile = new SaveFileDialog();

            SaveFile.Title = "다른 이름으로 저장";
            SaveFile.InitialDirectory = Environment.CurrentDirectory;
            SaveFile.Filter = "텍스트 문서(*.txt)|*.txt|모든 파일(*.*)|*.*";
            SaveFile.FileName = ShortName;

            if (SaveFile.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                FullName = SaveFile.FileName;
                FileInfo fi = new FileInfo(FullName);
                ShortName = fi.Name;

                this.Text = ShortName + " - MyNotePad";

                richTextBox1.SaveFile(FullName, RichTextBoxStreamType.PlainText);

            }
        }

        private void mnuInfo_Click(object sender, EventArgs e)
        {
            Form programInfo = new Form2();
            programInfo.ShowDialog();
        }

        private void mnuHelpView_Click(object sender, EventArgs e)
        {
            Form programInfo = new Form3();
            programInfo.ShowDialog();
        }
    }
}
