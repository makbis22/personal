using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1_국유채
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int Inputno = Convert.ToInt32(txtInput.Text);

            switch(cmbFomat.SelectedIndex)
            {
                case 0:
                    txtOutput.Text = Convert.ToString(Inputno,16);
                    break;
                case 1:
                    txtOutput.Text = Convert.ToString(Inputno, 2);
                    break;
                case 2:
                    txtOutput.Text = Convert.ToString(Inputno, 10);
                    break;
                default:
                    txtOutput.Text = "?";
                    break;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] NumFormat = { "HEX", "BIN", "DEC" };

            txtInput.Text = "";
            txtOutput.Text = "";

            cmbFomat.Items.AddRange(NumFormat);
            cmbFomat.SelectedIndex = 1;
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtInput.Text = "";
            txtOutput.Text = "";
        }
    }
}
