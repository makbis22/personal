namespace winformdbg3
{
    partial class MainForm
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.metroStyleManager1 = new MetroFramework.Components.MetroStyleManager(this.components);
            this.lblHumi = new System.Windows.Forms.Label();
            this.lblTemp = new System.Windows.Forms.Label();
            this.lblAmmo = new System.Windows.Forms.Label();
            this.lblCO2 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.chromiumWebBrowser1 = new CefSharp.WinForms.ChromiumWebBrowser();
            this.tglManualMode = new MetroFramework.Controls.MetroToggle();
            this.tglFan = new MetroFramework.Controls.MetroToggle();
            this.tglHumid = new MetroFramework.Controls.MetroToggle();
            this.tglLamp = new MetroFramework.Controls.MetroToggle();
            this.lblMinHumid = new System.Windows.Forms.Label();
            this.lblMaxHumid = new System.Windows.Forms.Label();
            this.btnExportData = new System.Windows.Forms.Button();
            this.updownMin = new System.Windows.Forms.NumericUpDown();
            this.updownMax = new System.Windows.Forms.NumericUpDown();
            this.btnSetHumid = new System.Windows.Forms.Button();
            this.btnGetHumid = new System.Windows.Forms.Button();
            this.crtActivity = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.pictureBox8 = new System.Windows.Forms.PictureBox();
            this.pictureBox10 = new System.Windows.Forms.PictureBox();
            this.pictureBox9 = new System.Windows.Forms.PictureBox();
            this.pictureBox6 = new System.Windows.Forms.PictureBox();
            this.pbHide = new System.Windows.Forms.PictureBox();
            this.pictureBox7 = new System.Windows.Forms.PictureBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.pbOriginal = new System.Windows.Forms.PictureBox();
            this.pictureBox5 = new System.Windows.Forms.PictureBox();
            this.pbYellow = new System.Windows.Forms.PictureBox();
            this.pbRed = new System.Windows.Forms.PictureBox();
            this.pbGreen = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.metroStyleManager1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.updownMin)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.updownMax)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.crtActivity)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox8)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox10)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox9)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbHide)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox7)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbOriginal)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbYellow)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbRed)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbGreen)).BeginInit();
            this.SuspendLayout();
            // 
            // metroStyleManager1
            // 
            this.metroStyleManager1.Owner = null;
            // 
            // lblHumi
            // 
            this.lblHumi.AutoSize = true;
            this.lblHumi.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(247)))), ((int)(((byte)(106)))));
            this.lblHumi.Font = new System.Drawing.Font("Arial Rounded MT Bold", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblHumi.Location = new System.Drawing.Point(510, 489);
            this.lblHumi.Name = "lblHumi";
            this.lblHumi.Size = new System.Drawing.Size(52, 28);
            this.lblHumi.TabIndex = 15;
            this.lblHumi.Text = "습도";
            this.lblHumi.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // lblTemp
            // 
            this.lblTemp.AutoSize = true;
            this.lblTemp.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(247)))), ((int)(((byte)(106)))));
            this.lblTemp.Font = new System.Drawing.Font("Arial Rounded MT Bold", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTemp.Location = new System.Drawing.Point(510, 436);
            this.lblTemp.Name = "lblTemp";
            this.lblTemp.Size = new System.Drawing.Size(52, 28);
            this.lblTemp.TabIndex = 16;
            this.lblTemp.Text = "온도";
            this.lblTemp.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // lblAmmo
            // 
            this.lblAmmo.AutoSize = true;
            this.lblAmmo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(247)))), ((int)(((byte)(106)))));
            this.lblAmmo.Font = new System.Drawing.Font("Arial Rounded MT Bold", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblAmmo.Location = new System.Drawing.Point(499, 598);
            this.lblAmmo.Name = "lblAmmo";
            this.lblAmmo.Size = new System.Drawing.Size(72, 28);
            this.lblAmmo.TabIndex = 17;
            this.lblAmmo.Text = "암모늄";
            this.lblAmmo.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // lblCO2
            // 
            this.lblCO2.AutoSize = true;
            this.lblCO2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(247)))), ((int)(((byte)(106)))));
            this.lblCO2.Font = new System.Drawing.Font("Arial Rounded MT Bold", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblCO2.Location = new System.Drawing.Point(499, 541);
            this.lblCO2.Name = "lblCO2";
            this.lblCO2.Size = new System.Drawing.Size(63, 28);
            this.lblCO2.TabIndex = 18;
            this.lblCO2.Text = "CO2";
            this.lblCO2.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(1058, 633);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(114, 23);
            this.button1.TabIndex = 21;
            this.button1.Text = "모든 그래프... ";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // chromiumWebBrowser1
            // 
            this.chromiumWebBrowser1.ActivateBrowserOnCreation = false;
            this.chromiumWebBrowser1.Location = new System.Drawing.Point(772, 60);
            this.chromiumWebBrowser1.Name = "chromiumWebBrowser1";
            this.chromiumWebBrowser1.Size = new System.Drawing.Size(384, 288);
            this.chromiumWebBrowser1.TabIndex = 46;
            // 
            // tglManualMode
            // 
            this.tglManualMode.AutoSize = true;
            this.tglManualMode.Location = new System.Drawing.Point(223, 346);
            this.tglManualMode.Name = "tglManualMode";
            this.tglManualMode.Size = new System.Drawing.Size(80, 16);
            this.tglManualMode.TabIndex = 47;
            this.tglManualMode.Text = "Off";
            this.tglManualMode.UseVisualStyleBackColor = true;
            this.tglManualMode.CheckedChanged += new System.EventHandler(this.tglManualMode_CheckedChanged);
            // 
            // tglFan
            // 
            this.tglFan.AutoSize = true;
            this.tglFan.Location = new System.Drawing.Point(223, 381);
            this.tglFan.Name = "tglFan";
            this.tglFan.Size = new System.Drawing.Size(80, 16);
            this.tglFan.TabIndex = 51;
            this.tglFan.Text = "Off";
            this.tglFan.UseVisualStyleBackColor = true;
            this.tglFan.CheckedChanged += new System.EventHandler(this.tglFan_CheckedChanged);
            // 
            // tglHumid
            // 
            this.tglHumid.AutoSize = true;
            this.tglHumid.Location = new System.Drawing.Point(223, 419);
            this.tglHumid.Name = "tglHumid";
            this.tglHumid.Size = new System.Drawing.Size(80, 16);
            this.tglHumid.TabIndex = 52;
            this.tglHumid.Text = "Off";
            this.tglHumid.UseVisualStyleBackColor = true;
            this.tglHumid.CheckedChanged += new System.EventHandler(this.tglHumid_CheckedChanged);
            // 
            // tglLamp
            // 
            this.tglLamp.AutoSize = true;
            this.tglLamp.Location = new System.Drawing.Point(225, 492);
            this.tglLamp.Name = "tglLamp";
            this.tglLamp.Size = new System.Drawing.Size(80, 16);
            this.tglLamp.TabIndex = 53;
            this.tglLamp.Text = "Off";
            this.tglLamp.UseVisualStyleBackColor = true;
            this.tglLamp.CheckedChanged += new System.EventHandler(this.tglLamp_CheckedChanged);
            // 
            // lblMinHumid
            // 
            this.lblMinHumid.AutoSize = true;
            this.lblMinHumid.BackColor = System.Drawing.Color.White;
            this.lblMinHumid.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMinHumid.Location = new System.Drawing.Point(93, 532);
            this.lblMinHumid.Name = "lblMinHumid";
            this.lblMinHumid.Size = new System.Drawing.Size(28, 18);
            this.lblMinHumid.TabIndex = 58;
            this.lblMinHumid.Text = "00";
            this.lblMinHumid.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // lblMaxHumid
            // 
            this.lblMaxHumid.AutoSize = true;
            this.lblMaxHumid.BackColor = System.Drawing.Color.White;
            this.lblMaxHumid.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblMaxHumid.Location = new System.Drawing.Point(92, 575);
            this.lblMaxHumid.Name = "lblMaxHumid";
            this.lblMaxHumid.Size = new System.Drawing.Size(28, 18);
            this.lblMaxHumid.TabIndex = 59;
            this.lblMaxHumid.Text = "00";
            this.lblMaxHumid.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // btnExportData
            // 
            this.btnExportData.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.btnExportData.Location = new System.Drawing.Point(948, 633);
            this.btnExportData.Name = "btnExportData";
            this.btnExportData.Size = new System.Drawing.Size(104, 23);
            this.btnExportData.TabIndex = 62;
            this.btnExportData.Text = "로그 내보내기";
            this.btnExportData.UseVisualStyleBackColor = true;
            this.btnExportData.Click += new System.EventHandler(this.btnExportData_Click);
            // 
            // updownMin
            // 
            this.updownMin.Location = new System.Drawing.Point(165, 602);
            this.updownMin.Name = "updownMin";
            this.updownMin.Size = new System.Drawing.Size(65, 21);
            this.updownMin.TabIndex = 64;
            // 
            // updownMax
            // 
            this.updownMax.Location = new System.Drawing.Point(228, 602);
            this.updownMax.Name = "updownMax";
            this.updownMax.Size = new System.Drawing.Size(65, 21);
            this.updownMax.TabIndex = 66;
            // 
            // btnSetHumid
            // 
            this.btnSetHumid.Location = new System.Drawing.Point(165, 629);
            this.btnSetHumid.Name = "btnSetHumid";
            this.btnSetHumid.Size = new System.Drawing.Size(128, 24);
            this.btnSetHumid.TabIndex = 67;
            this.btnSetHumid.Text = "적용";
            this.btnSetHumid.UseVisualStyleBackColor = true;
            this.btnSetHumid.Click += new System.EventHandler(this.btnSetHumid_Click);
            // 
            // btnGetHumid
            // 
            this.btnGetHumid.Location = new System.Drawing.Point(19, 616);
            this.btnGetHumid.Name = "btnGetHumid";
            this.btnGetHumid.Size = new System.Drawing.Size(140, 37);
            this.btnGetHumid.TabIndex = 68;
            this.btnGetHumid.Text = "현재 설정값 불러오기";
            this.btnGetHumid.UseVisualStyleBackColor = true;
            this.btnGetHumid.Click += new System.EventHandler(this.btnGetHumid_Click);
            // 
            // crtActivity
            // 
            this.crtActivity.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(206)))), ((int)(((byte)(137)))));
            chartArea1.AxisX.LabelStyle.Enabled = false;
            chartArea1.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea1.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea1.AxisY.LabelStyle.Enabled = false;
            chartArea1.Name = "ChartArea1";
            this.crtActivity.ChartAreas.Add(chartArea1);
            legend1.Enabled = false;
            legend1.Name = "Legend1";
            this.crtActivity.Legends.Add(legend1);
            this.crtActivity.Location = new System.Drawing.Point(725, 447);
            this.crtActivity.Name = "crtActivity";
            this.crtActivity.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.SemiTransparent;
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series1.Legend = "Legend1";
            series1.Name = "활동량";
            this.crtActivity.Series.Add(series1);
            this.crtActivity.Size = new System.Drawing.Size(447, 176);
            this.crtActivity.TabIndex = 69;
            this.crtActivity.Text = "chart5";
            // 
            // pictureBox8
            // 
            this.pictureBox8.Image = global::winformdbg3.Properties.Resources.titletiel;
            this.pictureBox8.Location = new System.Drawing.Point(819, 391);
            this.pictureBox8.Name = "pictureBox8";
            this.pictureBox8.Size = new System.Drawing.Size(233, 50);
            this.pictureBox8.TabIndex = 70;
            this.pictureBox8.TabStop = false;
            // 
            // pictureBox10
            // 
            this.pictureBox10.Image = global::winformdbg3.Properties.Resources.settemp;
            this.pictureBox10.Location = new System.Drawing.Point(165, 543);
            this.pictureBox10.Name = "pictureBox10";
            this.pictureBox10.Size = new System.Drawing.Size(128, 57);
            this.pictureBox10.TabIndex = 65;
            this.pictureBox10.TabStop = false;
            // 
            // pictureBox9
            // 
            this.pictureBox9.Image = global::winformdbg3.Properties.Resources.temp;
            this.pictureBox9.Location = new System.Drawing.Point(23, 520);
            this.pictureBox9.Name = "pictureBox9";
            this.pictureBox9.Size = new System.Drawing.Size(63, 90);
            this.pictureBox9.TabIndex = 60;
            this.pictureBox9.TabStop = false;
            // 
            // pictureBox6
            // 
            this.pictureBox6.Image = global::winformdbg3.Properties.Resources.borderline1;
            this.pictureBox6.Location = new System.Drawing.Point(45, 460);
            this.pictureBox6.Name = "pictureBox6";
            this.pictureBox6.Size = new System.Drawing.Size(224, 25);
            this.pictureBox6.TabIndex = 49;
            this.pictureBox6.TabStop = false;
            // 
            // pbHide
            // 
            this.pbHide.Location = new System.Drawing.Point(234, 375);
            this.pbHide.Name = "pbHide";
            this.pbHide.Size = new System.Drawing.Size(100, 81);
            this.pbHide.TabIndex = 54;
            this.pbHide.TabStop = false;
            // 
            // pictureBox7
            // 
            this.pictureBox7.Location = new System.Drawing.Point(224, 328);
            this.pictureBox7.Name = "pictureBox7";
            this.pictureBox7.Size = new System.Drawing.Size(26, 226);
            this.pictureBox7.TabIndex = 50;
            this.pictureBox7.TabStop = false;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::winformdbg3.Properties.Resources.list31;
            this.pictureBox1.Location = new System.Drawing.Point(19, 328);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(204, 226);
            this.pictureBox1.TabIndex = 48;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox4
            // 
            this.pictureBox4.Image = global::winformdbg3.Properties.Resources.borderline1;
            this.pictureBox4.Location = new System.Drawing.Point(45, 315);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(229, 25);
            this.pictureBox4.TabIndex = 45;
            this.pictureBox4.TabStop = false;
            // 
            // pictureBox3
            // 
            this.pictureBox3.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox3.Image")));
            this.pictureBox3.Location = new System.Drawing.Point(587, 420);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(107, 217);
            this.pictureBox3.TabIndex = 44;
            this.pictureBox3.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox2.Image")));
            this.pictureBox2.Location = new System.Drawing.Point(363, 429);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(100, 199);
            this.pictureBox2.TabIndex = 43;
            this.pictureBox2.TabStop = false;
            // 
            // pbOriginal
            // 
            this.pbOriginal.Location = new System.Drawing.Point(365, 60);
            this.pbOriginal.Name = "pbOriginal";
            this.pbOriginal.Size = new System.Drawing.Size(384, 288);
            this.pbOriginal.TabIndex = 2;
            this.pbOriginal.TabStop = false;
            // 
            // pictureBox5
            // 
            this.pictureBox5.Image = global::winformdbg3.Properties.Resources.title;
            this.pictureBox5.Location = new System.Drawing.Point(12, 12);
            this.pictureBox5.Name = "pictureBox5";
            this.pictureBox5.Size = new System.Drawing.Size(317, 336);
            this.pictureBox5.TabIndex = 39;
            this.pictureBox5.TabStop = false;
            // 
            // pbYellow
            // 
            this.pbYellow.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(247)))), ((int)(((byte)(106)))));
            this.pbYellow.Location = new System.Drawing.Point(342, 389);
            this.pbYellow.Name = "pbYellow";
            this.pbYellow.Size = new System.Drawing.Size(368, 278);
            this.pbYellow.TabIndex = 41;
            this.pbYellow.TabStop = false;
            // 
            // pbRed
            // 
            this.pbRed.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(206)))), ((int)(((byte)(137)))));
            this.pbRed.Location = new System.Drawing.Point(716, 389);
            this.pbRed.Name = "pbRed";
            this.pbRed.Size = new System.Drawing.Size(466, 278);
            this.pbRed.TabIndex = 42;
            this.pbRed.TabStop = false;
            // 
            // pbGreen
            // 
            this.pbGreen.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(173)))), ((int)(((byte)(206)))), ((int)(((byte)(116)))));
            this.pbGreen.Location = new System.Drawing.Point(342, 33);
            this.pbGreen.Name = "pbGreen";
            this.pbGreen.Size = new System.Drawing.Size(840, 350);
            this.pbGreen.TabIndex = 40;
            this.pbGreen.TabStop = false;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1205, 690);
            this.Controls.Add(this.pictureBox8);
            this.Controls.Add(this.crtActivity);
            this.Controls.Add(this.btnGetHumid);
            this.Controls.Add(this.btnSetHumid);
            this.Controls.Add(this.updownMax);
            this.Controls.Add(this.pictureBox10);
            this.Controls.Add(this.updownMin);
            this.Controls.Add(this.btnExportData);
            this.Controls.Add(this.pictureBox9);
            this.Controls.Add(this.lblMaxHumid);
            this.Controls.Add(this.lblMinHumid);
            this.Controls.Add(this.pictureBox6);
            this.Controls.Add(this.pbHide);
            this.Controls.Add(this.pictureBox7);
            this.Controls.Add(this.tglLamp);
            this.Controls.Add(this.tglHumid);
            this.Controls.Add(this.tglFan);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.tglManualMode);
            this.Controls.Add(this.chromiumWebBrowser1);
            this.Controls.Add(this.pictureBox4);
            this.Controls.Add(this.pictureBox3);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.pbOriginal);
            this.Controls.Add(this.pictureBox5);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.lblCO2);
            this.Controls.Add(this.lblAmmo);
            this.Controls.Add(this.lblTemp);
            this.Controls.Add(this.lblHumi);
            this.Controls.Add(this.pbYellow);
            this.Controls.Add(this.pbRed);
            this.Controls.Add(this.pbGreen);
            this.DisplayHeader = false;
            this.Name = "MainForm";
            this.Padding = new System.Windows.Forms.Padding(20, 30, 20, 20);
            this.ShadowType = MetroFramework.Forms.MetroForm.MetroFormShadowType.SystemShadow;
            this.Style = MetroFramework.MetroColorStyle.Green;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.metroStyleManager1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.updownMin)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.updownMax)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.crtActivity)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox8)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox10)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox9)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbHide)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox7)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbOriginal)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbYellow)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbRed)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pbGreen)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.PictureBox pbOriginal;
        private MetroFramework.Components.MetroStyleManager metroStyleManager1;
        private System.Windows.Forms.Label lblHumi;
        private System.Windows.Forms.Label lblTemp;
        private System.Windows.Forms.Label lblAmmo;
        private System.Windows.Forms.Label lblCO2;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.PictureBox pictureBox5;
        private System.Windows.Forms.PictureBox pbGreen;
        private System.Windows.Forms.PictureBox pbYellow;
        private System.Windows.Forms.PictureBox pbRed;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox4;
        private CefSharp.WinForms.ChromiumWebBrowser chromiumWebBrowser1;
        private MetroFramework.Controls.MetroToggle tglManualMode;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox6;
        private System.Windows.Forms.PictureBox pictureBox7;
        private MetroFramework.Controls.MetroToggle tglFan;
        private MetroFramework.Controls.MetroToggle tglHumid;
        private MetroFramework.Controls.MetroToggle tglLamp;
        private System.Windows.Forms.PictureBox pbHide;
        private System.Windows.Forms.Label lblMinHumid;
        private System.Windows.Forms.Label lblMaxHumid;
        private System.Windows.Forms.PictureBox pictureBox9;
        private System.Windows.Forms.Button btnExportData;
        private System.Windows.Forms.NumericUpDown updownMin;
        private System.Windows.Forms.PictureBox pictureBox10;
        private System.Windows.Forms.NumericUpDown updownMax;
        private System.Windows.Forms.Button btnSetHumid;
        private System.Windows.Forms.Button btnGetHumid;
        private System.Windows.Forms.DataVisualization.Charting.Chart crtActivity;
        private System.Windows.Forms.PictureBox pictureBox8;
    }
}

