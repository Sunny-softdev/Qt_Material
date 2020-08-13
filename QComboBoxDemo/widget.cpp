#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Add Planets to the Combo Box
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Saturn");
    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Mercury");
    ui->comboBox->addItem("Venus");

    //Make the Combo Box Editable
    ui->comboBox->setEditable(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_captureButton_clicked()
{
    qDebug() << "The selected planet is " << ui->comboBox->currentText() << " and the index is " << QString::number(ui->comboBox->currentIndex());
}

void Widget::on_setButton_clicked()
{
    ui->comboBox->setCurrentIndex(2);
}

void Widget::on_getButton_clicked()
{
    qDebug() << "Current number of elements in the Combo box are " << QString::number(ui->comboBox->count()) << " They are : ";
    for(int i = 0 ; i < ui->comboBox->count(); i++)
    {
        qDebug() << " Index " << QString::number(i) << " : " << ui->comboBox->itemText(i);
    }
}
