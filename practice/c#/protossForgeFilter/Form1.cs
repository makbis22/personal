using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using AForge;
using AForge.Video;
using AForge.Video.DirectShow;
using AForge.Imaging;
using AForge.Imaging.Filters;

namespace protossForgeFilter
{
    public partial class Form1 : Form
    {
        FilterInfoCollection filterInfoCollection;
        VideoCaptureDevice videoCaptureDevice;
        IFilter filter;
        bool GrayStyle = false;

        string[] filterName = new string[] { "Default", "Grayscale", "Sepia", "Invert", "Brightness Correction", "Contrast Correction", "Threshold", "TransformToPolar", "Sharpen", "Gaussian Blur", "Difference Edige Detector", "Sobel Edge Detector", "Oil Painting", "WaterWave" };
        public Form1()
        {
            InitializeComponent();
        }

        private void toolStripComboBox1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            filterInfoCollection = new FilterInfoCollection(FilterCategory.VideoInputDevice);
            cboDevice.Items.Clear();
            foreach (FilterInfo filterInfo in filterInfoCollection)
            {
                cboDevice.Items.Add(filterInfo.Name);
            }
            cboDevice.SelectedIndex = 0;
            videoCaptureDevice = new VideoCaptureDevice();
            cboFilter.Items.Clear();
            cboFilter.Items.AddRange(filterName);
            cboFilter.SelectedIndex = 0;
            GrayStyle = false;
            //filter = Grayscale.CommonAlgorithms.BT709;
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (videoCaptureDevice.IsRunning == true) videoCaptureDevice.Stop();
        }
        private void videoCaptureDevice_NewFrame(object sender, NewFrameEventArgs
eventArgs)
        {
            if (GrayStyle)
            {
                Bitmap Image = Grayscale.CommonAlgorithms.RMY.Apply(eventArgs.Frame);
                pictureBox1.Image = filter.Apply(Image);
            }
            else
            {
                pictureBox1.Image = filter.Apply(eventArgs.Frame);
            }
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            if (videoCaptureDevice.IsRunning == true)
            {
                videoCaptureDevice.Stop();
                btnStart.Text = "Start";
            }
            else
            {
                videoCaptureDevice = new
                VideoCaptureDevice(filterInfoCollection[cboDevice.SelectedIndex].MonikerString);
                videoCaptureDevice.NewFrame += videoCaptureDevice_NewFrame;
                videoCaptureDevice.Start();
                btnStart.Text = "Stop";
            }

        }

        private void cboFilter_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (cboFilter.Text)
            {
                case "Default":
                    GrayStyle = false;
                    filter = new BrightnessCorrection(0);
                    break;

                case "Grayscale":
                    GrayStyle = false;
                    Grayscale grayscale = new Grayscale(0.2125, 0.7154, 0.0721);
                    filter = grayscale;
                    break;

                    
                case "Sepia":
                    GrayStyle = false;
                    filter = new Sepia();
                    break;

                case "Invert":
                    GrayStyle = false;
                    filter = new Invert();
                    break;
                case "Brightness Correction":
                    GrayStyle = false;
                    filter = new BrightnessCorrection(-50);
                    break;
                case "Contrast Correction":
                    GrayStyle = false;
                    filter = new ContrastCorrection(15); //range to (0, 255)
                    break;
                case "Sharpen":
                    GrayStyle = false;
                    filter = new Sharpen();
                    break;
                case "Threshold":
                    GrayStyle = true;
                    filter = new Threshold(100);
                    break;
                case "Gaussian Blur":
                    GrayStyle = false;
                    filter = new GaussianBlur(4, 11);
                    break;
                case "Difference Edige Detector":
                    GrayStyle = true;
                    filter = new DifferenceEdgeDetector();
                    break;
                case "Sobel Edge Detector":
                    GrayStyle = true;
                    filter = new SobelEdgeDetector();
                    break;
                case "Oil Painting":
                    GrayStyle = false;
                    filter = new OilPainting(15);
                    break;
                case "TransformToPolar":
                    GrayStyle = false;
                    TransformToPolar transformToPolar = new TransformToPolar();
                    transformToPolar.OffsetAngle = 0;
                    transformToPolar.CirlceDepth = 1;
                    transformToPolar.UseOriginalImageSize = false;
                    transformToPolar.NewSize = new Size(400, 400);
                    filter = transformToPolar;
                    break;
                case "WaterWave":
                    GrayStyle = false;
                    WaterWave waterWave = new WaterWave();
                    waterWave.HorizontalWavesCount = 10;
                    waterWave.HorizontalWavesAmplitude = 5;
                    waterWave.VerticalWavesCount = 3;
                    waterWave.VerticalWavesAmplitude = 15;
                    filter = waterWave;
                    break;

            }

        }
    }
}
