namespace winformdbg3
{
    partial class GraphForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea2 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend2 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series2 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea3 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend3 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series3 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea4 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend4 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series4 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea5 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend5 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series5 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.chartTemp = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.chartHumi = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.chartAmmo = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.chartCO2 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.chartAct = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.btnClose = new MetroFramework.Controls.MetroButton();
            this.lblTemp = new System.Windows.Forms.Label();
            this.lblHumi = new System.Windows.Forms.Label();
            this.lblAmmo = new System.Windows.Forms.Label();
            this.lblCO2 = new System.Windows.Forms.Label();
            this.pictureBox10 = new System.Windows.Forms.PictureBox();
            this.pictureBox9 = new System.Windows.Forms.PictureBox();
            this.pictureBox8 = new System.Windows.Forms.PictureBox();
            this.pictureBox7 = new System.Windows.Forms.PictureBox();
            this.pictureBox6 = new System.Windows.Forms.PictureBox();
            this.pictureBox5 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.chartTemp)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartHumi)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartAmmo)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartCO2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartAct)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox10)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox9)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox8)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox7)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // chartTemp
            // 
            this.chartTemp.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(168)))), ((int)(((byte)(216)))), ((int)(((byte)(234)))));
            chartArea1.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea1.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea1.AxisY.Maximum = 100D;
            chartArea1.AxisY.Minimum = 0D;
            chartArea1.Name = "ChartArea1";
            this.chartTemp.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chartTemp.Legends.Add(legend1);
            this.chartTemp.Location = new System.Drawing.Point(23, 207);
            this.chartTemp.Name = "chartTemp";
            this.chartTemp.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.EarthTones;
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series1.Legend = "Legend1";
            series1.Name = "Series1";
            this.chartTemp.Series.Add(series1);
            this.chartTemp.Size = new System.Drawing.Size(1272, 138);
            this.chartTemp.TabIndex = 21;
            this.chartTemp.Text = "chart1";
            // 
            // chartHumi
            // 
            this.chartHumi.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(150)))), ((int)(((byte)(218)))));
            chartArea2.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea2.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea2.AxisY.Maximum = 100D;
            chartArea2.AxisY.Minimum = 0D;
            chartArea2.Name = "ChartArea1";
            this.chartHumi.ChartAreas.Add(chartArea2);
            legend2.Name = "Legend1";
            this.chartHumi.Legends.Add(legend2);
            this.chartHumi.Location = new System.Drawing.Point(23, 351);
            this.chartHumi.Name = "chartHumi";
            this.chartHumi.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.Fire;
            series2.ChartArea = "ChartArea1";
            series2.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series2.Legend = "Legend1";
            series2.Name = "Series1";
            this.chartHumi.Series.Add(series2);
            this.chartHumi.Size = new System.Drawing.Size(1272, 138);
            this.chartHumi.TabIndex = 22;
            this.chartHumi.Text = "chart2";
            // 
            // chartAmmo
            // 
            this.chartAmmo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(252)))), ((int)(((byte)(186)))), ((int)(((byte)(211)))));
            chartArea3.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea3.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea3.AxisY.Maximum = 100D;
            chartArea3.AxisY.Minimum = 0D;
            chartArea3.Name = "ChartArea1";
            this.chartAmmo.ChartAreas.Add(chartArea3);
            legend3.Name = "Legend1";
            this.chartAmmo.Legends.Add(legend3);
            this.chartAmmo.Location = new System.Drawing.Point(23, 495);
            this.chartAmmo.Name = "chartAmmo";
            this.chartAmmo.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.Bright;
            series3.ChartArea = "ChartArea1";
            series3.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series3.Legend = "Legend1";
            series3.Name = "Series1";
            this.chartAmmo.Series.Add(series3);
            this.chartAmmo.Size = new System.Drawing.Size(1272, 138);
            this.chartAmmo.TabIndex = 23;
            this.chartAmmo.Text = "chart3";
            // 
            // chartCO2
            // 
            this.chartCO2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(210)))));
            chartArea4.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea4.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea4.AxisY.Maximum = 100D;
            chartArea4.AxisY.Minimum = 0D;
            chartArea4.Name = "ChartArea1";
            this.chartCO2.ChartAreas.Add(chartArea4);
            legend4.Name = "Legend1";
            this.chartCO2.Legends.Add(legend4);
            this.chartCO2.Location = new System.Drawing.Point(23, 639);
            this.chartCO2.Name = "chartCO2";
            this.chartCO2.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.Berry;
            series4.ChartArea = "ChartArea1";
            series4.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series4.Legend = "Legend1";
            series4.Name = "Series1";
            this.chartCO2.Series.Add(series4);
            this.chartCO2.Size = new System.Drawing.Size(1272, 138);
            this.chartCO2.TabIndex = 24;
            this.chartCO2.Text = "chart4";
            // 
            // chartAct
            // 
            this.chartAct.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(237)))), ((int)(((byte)(241)))), ((int)(((byte)(214)))));
            chartArea5.AxisX.MajorGrid.LineColor = System.Drawing.Color.Silver;
            chartArea5.AxisX.MajorGrid.LineDashStyle = System.Windows.Forms.DataVisualization.Charting.ChartDashStyle.Dash;
            chartArea5.Name = "ChartArea1";
            this.chartAct.ChartAreas.Add(chartArea5);
            legend5.Name = "Legend1";
            this.chartAct.Legends.Add(legend5);
            this.chartAct.Location = new System.Drawing.Point(23, 63);
            this.chartAct.Name = "chartAct";
            this.chartAct.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.SemiTransparent;
            series5.ChartArea = "ChartArea1";
            series5.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series5.Legend = "Legend1";
            series5.Name = "Series1";
            this.chartAct.Series.Add(series5);
            this.chartAct.Size = new System.Drawing.Size(1272, 138);
            this.chartAct.TabIndex = 25;
            this.chartAct.Text = "chart5";
            // 
            // btnClose
            // 
            this.btnClose.Location = new System.Drawing.Point(1179, 783);
            this.btnClose.Name = "btnClose";
            this.btnClose.Size = new System.Drawing.Size(75, 23);
            this.btnClose.TabIndex = 26;
            this.btnClose.Text = "닫기";
            this.btnClose.Click += new System.EventHandler(this.btnClose_Click);
            // 
            // lblTemp
            // 
            this.lblTemp.AutoSize = true;
            this.lblTemp.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(168)))), ((int)(((byte)(216)))), ((int)(((byte)(234)))));
            this.lblTemp.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F);
            this.lblTemp.Location = new System.Drawing.Point(1176, 284);
            this.lblTemp.Name = "lblTemp";
            this.lblTemp.Size = new System.Drawing.Size(48, 18);
            this.lblTemp.TabIndex = 28;
            this.lblTemp.Text = "temp";
            // 
            // lblHumi
            // 
            this.lblHumi.AutoSize = true;
            this.lblHumi.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(150)))), ((int)(((byte)(218)))));
            this.lblHumi.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F);
            this.lblHumi.Location = new System.Drawing.Point(1176, 428);
            this.lblHumi.Name = "lblHumi";
            this.lblHumi.Size = new System.Drawing.Size(46, 18);
            this.lblHumi.TabIndex = 29;
            this.lblHumi.Text = "humi";
            // 
            // lblAmmo
            // 
            this.lblAmmo.AutoSize = true;
            this.lblAmmo.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(252)))), ((int)(((byte)(186)))), ((int)(((byte)(211)))));
            this.lblAmmo.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F);
            this.lblAmmo.Location = new System.Drawing.Point(1163, 573);
            this.lblAmmo.Name = "lblAmmo";
            this.lblAmmo.Size = new System.Drawing.Size(56, 18);
            this.lblAmmo.TabIndex = 30;
            this.lblAmmo.Text = "ammo";
            // 
            // lblCO2
            // 
            this.lblCO2.AutoSize = true;
            this.lblCO2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(210)))));
            this.lblCO2.Font = new System.Drawing.Font("Arial Rounded MT Bold", 12F);
            this.lblCO2.Location = new System.Drawing.Point(1163, 717);
            this.lblCO2.Name = "lblCO2";
            this.lblCO2.Size = new System.Drawing.Size(38, 18);
            this.lblCO2.TabIndex = 31;
            this.lblCO2.Text = "co2";
            // 
            // pictureBox10
            // 
            this.pictureBox10.Image = global::winformdbg3.Properties.Resources.cococo;
            this.pictureBox10.Location = new System.Drawing.Point(1161, 665);
            this.pictureBox10.Name = "pictureBox10";
            this.pictureBox10.Size = new System.Drawing.Size(105, 79);
            this.pictureBox10.TabIndex = 41;
            this.pictureBox10.TabStop = false;
            // 
            // pictureBox9
            // 
            this.pictureBox9.Image = global::winformdbg3.Properties.Resources.amoamo;
            this.pictureBox9.Location = new System.Drawing.Point(1166, 523);
            this.pictureBox9.Name = "pictureBox9";
            this.pictureBox9.Size = new System.Drawing.Size(116, 77);
            this.pictureBox9.TabIndex = 40;
            this.pictureBox9.TabStop = false;
            // 
            // pictureBox8
            // 
            this.pictureBox8.Image = global::winformdbg3.Properties.Resources.humihumi;
            this.pictureBox8.Location = new System.Drawing.Point(1166, 376);
            this.pictureBox8.Name = "pictureBox8";
            this.pictureBox8.Size = new System.Drawing.Size(105, 79);
            this.pictureBox8.TabIndex = 39;
            this.pictureBox8.TabStop = false;
            // 
            // pictureBox7
            // 
            this.pictureBox7.Image = global::winformdbg3.Properties.Resources.temptemptemp;
            this.pictureBox7.Location = new System.Drawing.Point(1166, 233);
            this.pictureBox7.Name = "pictureBox7";
            this.pictureBox7.Size = new System.Drawing.Size(100, 78);
            this.pictureBox7.TabIndex = 38;
            this.pictureBox7.TabStop = false;
            // 
            // pictureBox6
            // 
            this.pictureBox6.Image = global::winformdbg3.Properties.Resources.actact;
            this.pictureBox6.Location = new System.Drawing.Point(1161, 103);
            this.pictureBox6.Name = "pictureBox6";
            this.pictureBox6.Size = new System.Drawing.Size(100, 57);
            this.pictureBox6.TabIndex = 37;
            this.pictureBox6.TabStop = false;
            // 
            // pictureBox5
            // 
            this.pictureBox5.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(210)))));
            this.pictureBox5.Location = new System.Drawing.Point(1166, 639);
            this.pictureBox5.Name = "pictureBox5";
            this.pictureBox5.Size = new System.Drawing.Size(100, 34);
            this.pictureBox5.TabIndex = 36;
            this.pictureBox5.TabStop = false;
            // 
            // pictureBox4
            // 
            this.pictureBox4.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(252)))), ((int)(((byte)(186)))), ((int)(((byte)(211)))));
            this.pictureBox4.Location = new System.Drawing.Point(1166, 495);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(100, 34);
            this.pictureBox4.TabIndex = 35;
            this.pictureBox4.TabStop = false;
            // 
            // pictureBox3
            // 
            this.pictureBox3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(170)))), ((int)(((byte)(150)))), ((int)(((byte)(218)))));
            this.pictureBox3.Location = new System.Drawing.Point(1166, 351);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(100, 34);
            this.pictureBox3.TabIndex = 34;
            this.pictureBox3.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(168)))), ((int)(((byte)(216)))), ((int)(((byte)(234)))));
            this.pictureBox2.Location = new System.Drawing.Point(1166, 207);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(100, 34);
            this.pictureBox2.TabIndex = 33;
            this.pictureBox2.TabStop = false;
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(237)))), ((int)(((byte)(241)))), ((int)(((byte)(214)))));
            this.pictureBox1.Location = new System.Drawing.Point(1166, 63);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(100, 34);
            this.pictureBox1.TabIndex = 32;
            this.pictureBox1.TabStop = false;
            // 
            // GraphForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1318, 829);
            this.Controls.Add(this.lblCO2);
            this.Controls.Add(this.pictureBox10);
            this.Controls.Add(this.lblAmmo);
            this.Controls.Add(this.pictureBox9);
            this.Controls.Add(this.lblHumi);
            this.Controls.Add(this.pictureBox8);
            this.Controls.Add(this.lblTemp);
            this.Controls.Add(this.pictureBox7);
            this.Controls.Add(this.pictureBox6);
            this.Controls.Add(this.pictureBox5);
            this.Controls.Add(this.pictureBox4);
            this.Controls.Add(this.pictureBox3);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.btnClose);
            this.Controls.Add(this.chartAct);
            this.Controls.Add(this.chartCO2);
            this.Controls.Add(this.chartAmmo);
            this.Controls.Add(this.chartHumi);
            this.Controls.Add(this.chartTemp);
            this.Name = "GraphForm";
            this.Text = "그래프";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.GraphForm_FormClosing);
            this.Load += new System.EventHandler(this.Form2_Load);
            this.Shown += new System.EventHandler(this.GraphForm_Shown);
            ((System.ComponentModel.ISupportInitialize)(this.chartTemp)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartHumi)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartAmmo)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartCO2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.chartAct)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox10)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox9)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox8)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox7)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart chartTemp;
        private System.Windows.Forms.DataVisualization.Charting.Chart chartHumi;
        private System.Windows.Forms.DataVisualization.Charting.Chart chartAmmo;
        private System.Windows.Forms.DataVisualization.Charting.Chart chartCO2;
        private System.Windows.Forms.DataVisualization.Charting.Chart chartAct;
        private MetroFramework.Controls.MetroButton btnClose;
        private System.Windows.Forms.Label lblTemp;
        private System.Windows.Forms.Label lblHumi;
        private System.Windows.Forms.Label lblAmmo;
        private System.Windows.Forms.Label lblCO2;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox4;
        private System.Windows.Forms.PictureBox pictureBox5;
        private System.Windows.Forms.PictureBox pictureBox6;
        private System.Windows.Forms.PictureBox pictureBox7;
        private System.Windows.Forms.PictureBox pictureBox8;
        private System.Windows.Forms.PictureBox pictureBox9;
        private System.Windows.Forms.PictureBox pictureBox10;
    }
}