#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addItemButton_clicked()
{
    ui->listWidget->addItem("New Item");

}

void Widget::on_deleteItemButton_clicked()
{
    //To Delete Items : Use Take Items
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}

void Widget::on_selectedItemButton_clicked()
{
    QList<QListWidgetItem*> list = ui->listWidget->selectedItems();

    for(int i = 0; i < list.count(); i++)
    {
        qDebug() << "Selected Item : " << list.at(i)->text() << " , Row Number Id : " << ui->listWidget->row(list.at(i));
    }
}
