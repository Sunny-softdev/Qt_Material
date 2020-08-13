#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup *checkBox = new QButtonGroup(this);

    checkBox->addButton(ui->WindowscheckBox);
    checkBox->addButton(ui->MaccheckBox);
    checkBox->addButton(ui->LinuxcheckBox);

    checkBox->setExclusive(true);


    QButtonGroup *checkBox1 = new QButtonGroup(this);

    checkBox1->addButton(ui->juicecheckBox);
    checkBox1->addButton(ui->beercheckBox);
    checkBox1->addButton(ui->winecheckBox);

    checkBox1->setExclusive(false);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_WindowscheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Checkbox is checked";
    }
    else
    {
        qDebug()<<"Checkbox is unchecked";
    }

}

void Widget::on_juicecheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Juice Checkbox is checked";
    }
    else
    {
        qDebug()<<"Juice Checkbox is unchecked";
    }
}

void Widget::on_AradioButton_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"A Radio button is checked";
    }
    else
    {
        qDebug()<<"A Radio button is unchecked";
    }
}


void Widget::on_enterData_clicked()
{
    if(ui->WindowscheckBox->isChecked() && ui->BradioButton->isChecked()){
        qDebug() << "All the required data is selected";
    }
    else{
        qDebug() << "Failed to select the data";
    }

}

void Widget::on_setButton_clicked()
{
    //Exclusive check
    if(ui->WindowscheckBox->isChecked())
    {
        ui->WindowscheckBox->setChecked(false);
    }
    else
    {
        ui->WindowscheckBox->setChecked(true);
    }

    //Non Exclusive Check
    if(ui->winecheckBox->isChecked())
    {
        ui->winecheckBox->setChecked(false);
    }
    else
    {
        ui->winecheckBox->setChecked(true);
    }
}
