#include "widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QFont buttonFont("Times", 20, QFont::Bold);

    QPushButton *button1 = new QPushButton("Click Me", this);
    button1->move(100, 50);
    button1->setFont(buttonFont);
    connect(button1,&QPushButton::clicked,[=](){
        qDebug() << "Button is clicked";
    });

    QPushButton *button2 = new QPushButton("Click Me", this);
    button2->move(300, 50);
    button2->setFont(buttonFont);
    connect(button2,&QPushButton::pressed,[=](){
        qDebug() << "Button is pressed";
    });

    connect(button2,&QPushButton::released,[=](){
        qDebug() << "Button is released";
    });
}

Widget::~Widget()
{
}

