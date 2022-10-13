#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dialog.h"
#include<QVector>
#include<QDebug>
#include<QCoreApplication>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_insert_clicked()
{

    QString name=ui->lineEdit->text();
    QString skills=ui->lineEdit_2->text();

                  v.push_back(name);
                  v.push_back(skills);
}
void MainWindow::on_display_clicked()
{
   Dialog *d;
 d=new Dialog();
 d->setdata(v);
 d->show();

  for(int i=0;i<v.size();i++)
  {
         qDebug()<<v.at(i);

  }
 }




