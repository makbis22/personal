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

namespace ImagineDragonViewer
{
    public partial class Form1 : Form
    {
        string fullName;
        string shortName;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pictureBox1.BorderStyle = BorderStyle.FixedSingle;
            pictureBox1.BackColor = Color.White;
            pictureBox1.SizeMode = PictureBoxSizeMode.AutoSize;

            shortName = "제목 없음";
            this.Text = shortName + " - IMAGINE DRAGON VIEWER";
        }

        private void mnuEnd_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void mnuFile_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFile = new OpenFileDialog();

            openFile.Title = "ORIGIN IMAGE OPEN";
            openFile.InitialDirectory = Environment.CurrentDirectory;
            openFile.Filter = "Image Files|*.jpg;*.jpeg;*.gif;*.png;|All Files(*.*)|*.*";

            if (openFile.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                fullName = openFile.FileName;
                FileInfo fi = new FileInfo(fullName);
                shortName = fi.Name;

                pictureBox1.Image = Image.FromFile(fullName);
                //pictureBox1.Size.AutoSizeMode.GrowAndShrink=1;//
                this.Text = shortName + " - IMAGINE DRAGON VIEWER";
                this.Width = pictureBox1.Width+100;
                this.Height = pictureBox1.Height+100;


            }
        }

        private void mnuSaveAs_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFile = new SaveFileDialog();

            saveFile.Title = "다른 이름으로 저장";
            saveFile.InitialDirectory = Environment.CurrentDirectory;
            saveFile.Filter = "Image Files|*.jpg;*.jpeg;*.gif;*.png;|All Files(*.*)|*.*";
            saveFile.FileName = shortName;

            if (saveFile.ShowDialog()== System.Windows.Forms.DialogResult.OK)
            {
                fullName = saveFile.FileName;
                FileInfo fi = new FileInfo(fullName);
                shortName = fi.Name;

                this.Text = shortName + " - IMAGINE DRAGON VIEWER";
                pictureBox1.Image.Save(fullName);
            }
        }
    }
}
