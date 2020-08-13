/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QPushButton *captureButton;
    QPushButton *setButton;
    QPushButton *getButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(284, 187);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        captureButton = new QPushButton(Widget);
        captureButton->setObjectName(QString::fromUtf8("captureButton"));

        verticalLayout->addWidget(captureButton);

        setButton = new QPushButton(Widget);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        verticalLayout->addWidget(setButton);

        getButton = new QPushButton(Widget);
        getButton->setObjectName(QString::fromUtf8("getButton"));

        verticalLayout->addWidget(getButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        captureButton->setText(QCoreApplication::translate("Widget", "Capture Value", nullptr));
        setButton->setText(QCoreApplication::translate("Widget", "Set Value", nullptr));
        getButton->setText(QCoreApplication::translate("Widget", "Get Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
