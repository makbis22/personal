﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FileExploder
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void ListView_int()
        {
            listView1.View = View.Details;

            listView1.Columns.Add("이름", listView1.Width / 4, HorizontalAlignment.Left);
            listView1.Columns.Add("수정한 날짜", listView1.Width, HorizontalAlignment.Left);
            listView1.Columns.Add("유형", listView1.Width / 4, HorizontalAlignment.Left);
            listView1.Columns.Add("크기", listView1.Width / 4, HorizontalAlignment.Left);

            listView1.FullRowSelect = true;
        }

        private void FillTreeView(TreeNode dirNode)
        {
            try
            {
                DirectoryInfo dir = new DirectoryInfo(dirNode.FullPath);

                foreach (DirectoryInfo diritem in dir.GetDirectories())
                {
                    TreeNode newNode = new TreeNode(diritem.Name);
                    newNode.ImageIndex = 2;
                    newNode.SelectedImageIndex = 2;
                    dirNode.Nodes.Add(newNode);
                    newNode.Nodes.Add("*");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show("에러 발생 : " + ex.Message);
            }
        }

        private void Make_Treeview()
        {
            DriveInfo[] allDive = DriveInfo.GetDrives();

            foreach (DriveInfo dName in allDive)
            {
                if (dName.DriveType == DriveType.Fixed)
                {
                    TreeNode rootNode = new TreeNode(dName.Name);

                    if (dName.Name == @"C:\")
                    {
                        rootNode.ImageIndex = 0;
                        rootNode.SelectedImageIndex = 0;
                        treeView1.Nodes.Add(rootNode);
                        FillTreeView(rootNode);
                    }
                    else
                    {
                        rootNode.ImageIndex = 1;
                        rootNode.SelectedImageIndex = 1;
                        treeView1.Nodes.Add(rootNode);
                        FillTreeView(rootNode);
                    }
                }
            }
            treeView1.Nodes[0].Expand();
        }

        private void GetDirectoryList(string tPath)
        {
            DirectoryInfo dir = new DirectoryInfo(tPath);

            listView1.Items.Clear();
            int DirectCount = 0;

            foreach (DirectoryInfo dirItem in dir.GetDirectories())
            {
                ListViewItem lvItem = new ListViewItem();

                lvItem.ImageIndex = 2;
                lvItem.Text = dirItem.Name;

                listView1.Items.Add(lvItem);

                listView1.Items[DirectCount].SubItems.Add(dirItem.CreationTime.ToString());
                listView1.Items[DirectCount].SubItems.Add("폴더");
                listView1.Items[DirectCount].SubItems.Add(dirItem.GetFiles().Length.ToString()+"Files");
                DirectCount++;
            }
            textPath.Text = dir.FullName;
        }

        private void GetFileList(string tPath)
        {
            DirectoryInfo dir = new DirectoryInfo(tPath);

            FileInfo[] files = dir.GetFiles();
            int Count = 0;
            foreach (FileInfo fileInfo in files)
            {
                listView1.Items.Add(fileInfo.Name);
                if (fileInfo.LastWriteTime != null)
                {
                    listView1.Items[Count].SubItems.Add(fileInfo.LastWriteTime.ToString());
                }
                else
                {
                    listView1.Items[Count].SubItems.Add(fileInfo.CreationTime.ToString());
                }
                listView1.Items[Count].SubItems.Add(fileInfo.Attributes.ToString());
                listView1.Items[Count].SubItems.Add(fileInfo.Length.ToString());
                Count++;
            }
        }

        

        private void Form1_Load(object sender, EventArgs e)
        {
            ListView_int();
            Make_Treeview();
            

        }

        private void treeView1_BeforeExpand(object sender, TreeViewCancelEventArgs e)
        {
            if (e.Node.Nodes[0].Text == "*")
            {
                e.Node.Nodes.Clear();
                e.Node.ImageIndex = 3;
                e.Node.SelectedImageIndex = 3;
                FillTreeView(e.Node);
            }
        }

        private void treeView1_BeforeCollapse(object sender, TreeViewCancelEventArgs e)
        {
            if (e.Node.Nodes[0].Text == "*")
            {
                e.Node.ImageIndex = 2;
                e.Node.SelectedImageIndex= 2; ;
            }
        }

        private void treeView1_NodeMouseClick(object sender, TreeNodeMouseClickEventArgs e)
        {
            try
            {
                string path = e.Node.FullPath;

                GetDirectoryList(path);
                GetFileList(path);
            }
            catch (Exception ex)
            {
                MessageBox.Show("에러 발생 : " + ex.Message);
            }
            treeView1.Nodes[0].Expand();
        }
    }
    
}
