#include "widget.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton("Click Me",this);
   // button->setText("Click Me");
    button->move(300,300);
    connect(button,&QPushButton::clicked,[=](){

      /*  QMessageBox message;
        message.setMinimumSize(300,200);
        message.setWindowTitle("Message Title Box");
        message.setText("Error Occured");
        message.setInformativeText("Do you want to solve the error?");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int ret = message.exec();*/

        /*Critical Message
        int ret = QMessageBox::critical(this,"Error Box","Error Occured. Do you want to resolve the error?", QMessageBox::Ok | QMessageBox::Cancel);*/

        /*Information Message
        int ret = QMessageBox::information(this,"Error Box","Error Occured. Do you want to resolve the error?", QMessageBox::Ok | QMessageBox::Cancel);*/

        /*Question Message
        int ret = QMessageBox::question(this,"Error Box","Error Occured. Do you want to resolve the error?", QMessageBox::Ok | QMessageBox::Cancel);*/

        int ret = QMessageBox::warning(this,"Error Box","Error Occured. Do you want to resolve the error?", QMessageBox::Ok | QMessageBox::Cancel);
        if (ret == QMessageBox::Ok)
        {
            qDebug() << "User Clicked Ok";
        }

        if(ret == QMessageBox::Cancel)
        {
            qDebug() << "User Clicked Cancel";
        }
    });
}

Widget::~Widget()
{
}

