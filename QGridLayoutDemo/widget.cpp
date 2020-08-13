#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Create a Layout
    //QGridLayout *layout = new QGridLayout(this);
    QGridLayout *layout = new QGridLayout();

    //First Row
    layout->addWidget(ui->pushButton1,0,0);
    layout->addWidget(ui->pushButton2,0,1);
    //Span
    layout->addWidget(ui->pushButton3,0,2,2,1);

    //Second Row
    //Span
    layout->addWidget(ui->pushButton4,1,0,1,2);
   // layout->addWidget(ui->pushButton5,1,1);
   // layout->addWidget(ui->pushButton6,1,2);

    //Third Row
    layout->addWidget(ui->pushButton7,2,0);
    layout->addWidget(ui->pushButton8,2,1);
    layout->addWidget(ui->pushButton9,2,2);

    //Set the layout
    setLayout(layout);
}

Widget::~Widget()
{
    delete ui;
}

