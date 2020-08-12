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
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *obamaTextLabel;
    QLabel *obamaImageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        obamaTextLabel = new QLabel(Widget);
        obamaTextLabel->setObjectName(QString::fromUtf8("obamaTextLabel"));
        obamaTextLabel->setGeometry(QRect(240, 50, 171, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Serif"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        obamaTextLabel->setFont(font);
        obamaImageLabel = new QLabel(Widget);
        obamaImageLabel->setObjectName(QString::fromUtf8("obamaImageLabel"));
        obamaImageLabel->setGeometry(QRect(150, 100, 251, 201));
        obamaImageLabel->setScaledContents(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        obamaTextLabel->setText(QCoreApplication::translate("Widget", "President Obama", nullptr));
        obamaImageLabel->setText(QCoreApplication::translate("Widget", "Image Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
