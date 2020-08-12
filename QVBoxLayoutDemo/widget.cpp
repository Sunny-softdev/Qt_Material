#include "widget.h"
#include "ui_widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
/*
    //Define the Layout
    QVBoxLayout *layout = new QVBoxLayout();

    //Add buttons to the layout
    layout->addWidget(ui->oneButton);
    layout->addWidget(ui->twoButton);
    layout->addWidget(ui->threeButton);
    layout->addWidget(ui->fourButton);
    layout->addWidget(ui->fiveButton);

    //Set the Layout
    setLayout(layout);
*/

}

Widget::~Widget()
{
    delete ui;
}

