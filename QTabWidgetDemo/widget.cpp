#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QVBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Add Widget through Code

    //Declare the Widget
    QWidget *widget =new QWidget(this);

    //Define the layout for the Widget
    QVBoxLayout *layout = new QVBoxLayout();

    layout->addWidget((new QPushButton("Button_1", this)));
    layout->addWidget((new QPushButton("Button_2", this)));
    layout->addWidget((new QPushButton("Button_3", this)));
    QPushButton *button4 = new QPushButton("Button_4", this);
    connect(button4,&QPushButton::clicked,[=](){
        qDebug() << "Button4 from custom tab clicked";
    });

    layout->addWidget(button4);
    layout->addSpacerItem(new QSpacerItem(100,200));

    //Set the layout to the widget
    widget->setLayout(layout);

    //Add the widget to your layout
    ui->tabWidget->addTab(widget, "Tab 4");

    //Change the position of the customized tab
    ui->tabWidget->insertTab(1,widget,"Tab 4");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_Tab1pushButton_clicked()
{
    qDebug() << "Tab1 is clicked";
}
