#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->obamaTextLabel->move(250,30);

    //Add an image to an Image Label
    QPixmap obamaPixMap("://images/PresidentObama.png");

    ui->obamaImageLabel->move(200,70);
    ui->obamaImageLabel->setPixmap(obamaPixMap.scaled(400,400));

}

Widget::~Widget()
{
    delete ui;
}

