#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label = new QLabel("Text Editor",this);
    label->move(100,25);


    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->move(80,65);

    //Changed Text
   /* connect(textEdit,&QTextEdit::textChanged,[=](){
        qDebug() << "Text Changed";
    });*/

    QPushButton *copyButton = new QPushButton("Copy",this);
    copyButton->move(10,300);
    copyButton->setMinimumSize(50,25);
    connect(copyButton,&QPushButton::clicked,[=](){
        textEdit->copy();
    });

    QPushButton *cutButton = new QPushButton("Cut",this);
    cutButton->move(100,300);
    cutButton->setMinimumSize(50,25);
    connect(cutButton,&QPushButton::clicked,[=](){
        textEdit->cut();
    });

    QPushButton *pasteButton = new QPushButton("Paste",this);
    pasteButton->move(200,300);
    pasteButton->setMinimumSize(50,25);
    connect(pasteButton,&QPushButton::clicked,[=](){
        textEdit->paste();
    });

    QPushButton *undoButton = new QPushButton("Undo",this);
    undoButton->move(10,340);
    undoButton->setMinimumSize(50,25);
    connect(undoButton,&QPushButton::clicked,[=](){
        textEdit->undo();
    });

    QPushButton *redoButton = new QPushButton("Redo",this);
    redoButton->move(100,340);
    redoButton->setMinimumSize(50,25);
    connect(redoButton,&QPushButton::clicked,[=](){
        textEdit->redo();
    });


    QPushButton *plainTextButton = new QPushButton("Plain Text",this);
    plainTextButton->move(10,370);
    plainTextButton->setMinimumSize(100,25);
    connect(plainTextButton,&QPushButton::clicked,[=](){
        textEdit->setPlainText("Hi! This is a simple plain text");
    });


    QPushButton *htmlButton = new QPushButton("Html Text",this);
    htmlButton->move(130,370);
    htmlButton->setMinimumSize(100,25);
    connect(htmlButton,&QPushButton::clicked,[=](){
        textEdit->setHtml("<h1>Hi! This is a simple HTML Text</h1>");
    });


    QPushButton *enterTextButton = new QPushButton("Enter Text",this);
    enterTextButton->move(10,400);
    enterTextButton->setMinimumSize(100,25);
    connect(enterTextButton,&QPushButton::clicked,[=](){
        qDebug() <<"Following is the entered text : " << textEdit->toPlainText();
    });

    QPushButton *enterhtmlButton = new QPushButton("Enter HTML",this);
    enterhtmlButton->move(130,400);
    enterhtmlButton->setMinimumSize(100,25);
    connect(enterhtmlButton,&QPushButton::clicked,[=](){
        qDebug() <<"Following is the entered HTML" << textEdit->toHtml();
    });

    setFixedSize(400,400);

}

Widget::~Widget()
{
}

