#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>
#include<QVector>
#include<QString>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setdata(QVector<QString>v)
{

   for(int i=0;i<v.size();i++)
{
   ui->listWidget->addItem(v.at(i));
   }

}


