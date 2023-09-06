using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculaor
{
    public partial class Form1 : Form
    {
        string strKeyin;
        double NumA, NumB;
        string Cmd;


        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            strKeyin = "";
            textBox1.Text = strKeyin;
            NumA = 0.0;
            NumB = 0.0;
            Cmd = "";
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button13_Click(object sender, EventArgs e)
        {
            strKeyin += "1";
            textBox1.Text = strKeyin;

        }

        private void button14_Click(object sender, EventArgs e)
        {
            strKeyin += "2";
            textBox1.Text = strKeyin;

        }

        private void button16_Click(object sender, EventArgs e)
        {
            if (IsNumber(strKeyin))
            // check if current input is a number
            {
                NumA = Convert.ToDouble(strKeyin);
                NumB = 0;
                Cmd = "/";
                strKeyin = "";
            }
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            strKeyin += "3";
            textBox1.Text = strKeyin;

        }

        private void btn4_Click(object sender, EventArgs e)
        {
            strKeyin += "4";
            textBox1.Text = strKeyin;

        }

        private void btn5_Click(object sender, EventArgs e)
        {
            strKeyin += "5";
            textBox1.Text = strKeyin;

        }

        private void btn6_Click(object sender, EventArgs e)
        {
            strKeyin += "6";
            textBox1.Text = strKeyin;

        }

        private void btn7_Click(object sender, EventArgs e)
        {
            strKeyin += "7";
            textBox1.Text = strKeyin;

        }

        private void btn8_Click(object sender, EventArgs e)
        {
            strKeyin += "8";
            textBox1.Text = strKeyin;

        }

        private void btn9_Click(object sender, EventArgs e)
        {
            strKeyin += "9";
            textBox1.Text = strKeyin;

        }

        private void btn0_Click(object sender, EventArgs e)
        {
            string temp;
            int vTemp;
            temp = strKeyin + "0";
            vTemp = Convert.ToInt32(temp);
            if (vTemp > 0)
            {
                strKeyin = Convert.ToString(vTemp);
            }
            else { strKeyin = ""; }
            textBox1.Text = strKeyin;
        }

        private void btnAC_Click(object sender, EventArgs e)
        {
            strKeyin = "";
            textBox1.Text = strKeyin;
            NumA = 0;
            NumB = 0;
            Cmd = "";
        }

        private void btn00_Click(object sender, EventArgs e)
        {
            string temp;
            int vTemp;
            temp = strKeyin + "00";
            vTemp = (int)Convert.ToDouble(temp);
            if (vTemp > 0)
            {
                strKeyin = Convert.ToString(vTemp);
            }
            else { strKeyin = ""; }
            textBox1.Text = strKeyin;

        }
        private bool IsNumber(string input)
        {
            int num;
            return int.TryParse(input, out num);
            // try to parse input as integer
        }
        private void btnMinus_Click(object sender, EventArgs e)
        {
            if (IsNumber(strKeyin))
            // check if current input is a number
            {
                NumA = Convert.ToDouble(strKeyin);
                NumB = 0;
                Cmd = "-";
                strKeyin = "";
            }
        }

        private void btnMulti_Click(object sender, EventArgs e)
        {
            if (IsNumber(strKeyin))
            // check if current input is a number
            {
                NumA = Convert.ToDouble(strKeyin);
                NumB = 0;
                Cmd = "*";
                strKeyin = "";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (IsNumber(strKeyin))
            // check if current input is a number
            {
                NumA = Convert.ToDouble(strKeyin);
                NumB = 0;
                Cmd = "+";
                strKeyin = "";
            }
        }

        private void btnEqual_Click(object sender, EventArgs e)
        {
            if ((NumA > 0) && (Cmd != ""))
            {
                NumB = Convert.ToDouble(strKeyin);
                Math1();
            }
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void btnC_Click(object sender, EventArgs e)
        {

        }

        private void btnDot_Click(object sender, EventArgs e)
        {
            {
                if (!strKeyin.Contains("."))
                // check if strKeyin already contains a dot
                {
                    strKeyin += ".";
                    // append a dot character to strKeyin
                    textBox1.Text = strKeyin;
                    // update the display in the textbox control
                }
            }
        }

        private void btnBS_Click(object sender, EventArgs e)
        {
            if (strKeyin.Length > 0)
            // strKeyin이 있는지 확인
            {
                strKeyin = strKeyin.Substring(0, strKeyin.Length - 1);
                // strKeyin의 마지막 문자 삭제
                textBox1.Text = strKeyin;

            }
        }

        private void Math1()
        {
            double Res;

            switch (Cmd)
            {
                case "+":
                    Res = NumA + Convert.ToDouble(strKeyin);
                    break;
                case "-":
                    Res = NumA - Convert.ToDouble(strKeyin);
                    break;
                case "/":
                    Res = NumA / Convert.ToDouble(strKeyin);
                    break;
                case "*":
                    Res = NumA * Convert.ToDouble(strKeyin);
                    break;
                default:
                    Res = 0;
                    break;
            }
            string resultString = Res.ToString("#.##");

            strKeyin = Convert.ToString(Res);
            textBox1.Text = strKeyin;
            NumB = 0;
            Cmd = "";


        }
    }
}
