#include "widget.h"
#include <QLineEdit>
#include <QDebug>
#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QFont labelFont("Times", 20, QFont::Bold);
    QFont editFont("Times", 20, QFont::Normal);
    //First Name
    QLabel *firstNameLabel = new QLabel("First Name",this);
    firstNameLabel->setMinimumSize(140,40);
    firstNameLabel->setFont(labelFont);
    firstNameLabel->move(10,10);

    QLineEdit *firstNameEditLine = new QLineEdit(this);
    firstNameEditLine->setMinimumSize(200,40);
    firstNameEditLine->setFont(editFont);
    firstNameEditLine->move(200,10);

    //Last Name
    QLabel *lastNameLabel = new QLabel("Last Name",this);
    lastNameLabel->setMinimumSize(140,40);
    lastNameLabel->setFont(labelFont);
    lastNameLabel->move(10,60);

    QLineEdit *lastNameEditLine = new QLineEdit(this);
    lastNameEditLine->setMinimumSize(200,40);
    lastNameEditLine->setFont(editFont);
    lastNameEditLine->move(200,60);

    //City Name
    QLabel *cityNameLabel = new QLabel("City",this);
    cityNameLabel->setMinimumSize(140,40);
    cityNameLabel->setFont(labelFont);
    cityNameLabel->move(10,110);

    QLineEdit *cityNameEditLine = new QLineEdit(this);
    cityNameEditLine->setMinimumSize(200,40);
    cityNameEditLine->setFont(editFont);
    cityNameEditLine->move(200,110);

    //Button
    QFont buttonFont("System", 60, QFont::Normal);
    QPushButton *button = new QPushButton("Enter",this);
    button->setFont(buttonFont);
    button->setMaximumSize(150,50);
    button->move(100,170);


    connect(button,&QPushButton::clicked,[=](){
        QString firstName = firstNameEditLine->text();
        QString lastName = lastNameEditLine->text();
        QString cityName = cityNameEditLine->text();


        if(!firstName.isEmpty() && !lastName.isEmpty() && !cityName.isEmpty())
        {
            qDebug() << "First Name is " << firstName;
            qDebug() << "Last Name is "  << lastName;
            qDebug() << "City Name is " << cityName;
        }
        else
        {
            qDebug() << "A field is empty";
        }

    });

    //Response to signals from QLineEdits

    //cursorPositionChanged
   /* connect(firstNameEditLine,&QLineEdit::cursorPositionChanged,[=](){
        qDebug() << "The current cursor position is " << firstNameEditLine->cursorPosition();
    });*/

    //editingFinished
  /*  connect(firstNameEditLine,&QLineEdit::editingFinished,[=](){
        qDebug() << "Editing Finished";
    });*/

    //return Pressed
    connect(firstNameEditLine,&QLineEdit::returnPressed,[=](){
        qDebug() << "Return Pressed";
    });


    //selection Changed
    connect(firstNameEditLine,&QLineEdit::selectionChanged,[=](){
        qDebug() << "Selection Changed.";
    });

    //Text Changed
   /* connect(firstNameEditLine,&QLineEdit::textChanged,[=](){
        qDebug() << "Text Changed to " << firstNameEditLine->text();
    });*/

    //Text Edited
    connect(firstNameEditLine,&QLineEdit::textEdited,[=](){
        qDebug() << "Text Changed and Edited to " << firstNameEditLine->text();
    });

    //Change text in QLineEdit programmatically
   // lastNameEditLine->setText("Nikam");

     //Set Placeholders
      firstNameEditLine->setPlaceholderText("First Name");
      lastNameEditLine->setPlaceholderText("Last Name");
      cityNameEditLine->setPlaceholderText("City Name");
}

Widget::~Widget()
{
}

