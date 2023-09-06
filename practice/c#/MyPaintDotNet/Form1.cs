using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyPaintDotNet
{
    public partial class Form1 : Form
    {
        enum DRAW_MODE : int
        {
            PENMODE = 0,
            ERASERMODE = 1,
            SHAPEMODE = 2,
            FLOODMODE = 3,
        }

        int curMode;
        Color curColor = Color.Black;
        int curLineSize = 5;

        Point mouseDownPoint;

        Bitmap pictureBoxBmp;

        public Form1()
        {
            InitializeComponent();
            pictureBoxBmp = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = pictureBoxBmp;
        }

        private Cursor loadCursor(byte[] cursorFile) 
        {
            MemoryStream cursorMemoryStream = new MemoryStream(cursorFile);
            Cursor hand = new Cursor(cursorMemoryStream);

            return hand;
        }

        private void setDrawMode(int mode)
        {
            switch (mode)
            {
                case (int)DRAW_MODE.PENMODE:
                    curMode = (int)DRAW_MODE.PENMODE;
                    this.Cursor = loadCursor(Properties.Resources.PenCursor1);
                    break;
                case (int)DRAW_MODE.ERASERMODE:
                    curMode = (int)DRAW_MODE.ERASERMODE;
                    this.Cursor = loadCursor(Properties.Resources.EraserCursor);
                    break;
                case (int)DRAW_MODE.SHAPEMODE:
                    curMode = (int)DRAW_MODE.SHAPEMODE;
                    this.Cursor = loadCursor(Properties.Resources.ShapesCursor);
                    break;
                case (int)DRAW_MODE.FLOODMODE:
                    curMode = (int)DRAW_MODE.FLOODMODE;
                    this.Cursor = loadCursor(Properties.Resources.PaintCursor);
                    break;
                default:
                    Cursor = Cursors.Default;
                    break;
            }
        }

        private void btnPen_Click(object sender, EventArgs e)
        {
            setDrawMode((int)DRAW_MODE.PENMODE);
        }

        private void btnEraser_Click(object sender, EventArgs e)
        {
            setDrawMode((int)DRAW_MODE.ERASERMODE);
        }

        private void btnShape_Click(object sender, EventArgs e)
        {
            setDrawMode((int)DRAW_MODE.SHAPEMODE);
        }

        private void btnFlood_Click(object sender, EventArgs e)
        {
            setDrawMode((int)DRAW_MODE.FLOODMODE);
        }

        private void btnColor_Click(object sender, EventArgs e)
        {
            ColorDialog colorDialog = new ColorDialog();

            if (colorDialog.ShowDialog() == DialogResult.OK)
            {
                curColor = colorDialog.Color;
                btnColor.BackColor = curColor;
            }
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if ((curMode ==(int)DRAW_MODE.PENMODE||curMode ==(int)DRAW_MODE.ERASERMODE)&& e.Button == MouseButtons.Left)
            {
                Point curPoint = pictureBox1.PointToClient(new Point(Control.MousePosition.X, Control.MousePosition.Y));

                Pen p;
                if (curMode == (int)DRAW_MODE.ERASERMODE)
                    p = new Pen(Color.White);
                else
                    p = new Pen(curColor);

                p.Width = curLineSize;

                Graphics g = Graphics.FromImage(pictureBoxBmp);
                g.DrawEllipse(p, curPoint.X, curPoint.Y, p.Width, p.Width);
                pictureBox1.Image = pictureBoxBmp;

                p.Dispose();
                g.Dispose();
            }
        }
        private void doFloodFill(Point startPoint, Color preColor)
        {
            try
            {
                Stack<Point> pixels = new Stack<Point>();
                pixels.Push(startPoint);

                while (pixels.Count > 0)
                {
                    Point k = pixels.Pop();
                    if (k.X < pictureBoxBmp.Width && k.X > 0 && k.Y < pictureBoxBmp.Height && k.Y > 0)
                    {
                        if (pictureBoxBmp.GetPixel(k.X, k.Y) == preColor)
                        {
                            pictureBoxBmp.SetPixel(k.X, k.Y, curColor);
                            pixels.Push(new Point(k.X - 1, k.Y));
                            pixels.Push(new Point(k.X + 1, k.Y));
                            pixels.Push(new Point(k.X, k.Y - 1));
                            pixels.Push(new Point(k.X, k.Y + 1));
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void pictureBox1_MouseClick(object sender, MouseEventArgs e)
        {
            if (curMode == (int)DRAW_MODE.FLOODMODE)
            {
                Point startPoint = pictureBox1.PointToClient(new Point(Control.MousePosition.X, Control.MousePosition.Y));
                Color preColor = pictureBoxBmp.GetPixel(startPoint.X, startPoint.Y);
                doFloodFill(startPoint, preColor);
                pictureBox1.Image = pictureBoxBmp;
            }
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            if (curMode == (int)DRAW_MODE.SHAPEMODE && e.Button == MouseButtons.Left)
            {
                mouseDownPoint = new Point(e.X, e.Y);
            }


        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            if (curMode == (int)DRAW_MODE.SHAPEMODE && e.Button == MouseButtons.Left)
            {
                Pen p = new Pen(curColor);
                p.Width = curLineSize;
                Point mouseUpPoint = new Point(e.X, e.Y);
                Graphics g = Graphics.FromImage(pictureBoxBmp);
                g.DrawRectangle(p, new Rectangle(mouseDownPoint.X, mouseDownPoint.Y,
                Math.Abs(mouseUpPoint.X - mouseDownPoint.X), Math.Abs(mouseUpPoint.Y - mouseDownPoint.Y)));
                pictureBox1.Image = pictureBoxBmp;
                p.Dispose();
                g.Dispose();
            }
        }
    }
}
