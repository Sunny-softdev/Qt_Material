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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *WindowscheckBox;
    QCheckBox *LinuxcheckBox;
    QCheckBox *MaccheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *juicecheckBox;
    QCheckBox *beercheckBox;
    QCheckBox *winecheckBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *AradioButton;
    QRadioButton *BradioButton;
    QRadioButton *CradioButton;
    QPushButton *enterData;
    QPushButton *setButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(301, 310);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WindowscheckBox = new QCheckBox(groupBox);
        WindowscheckBox->setObjectName(QString::fromUtf8("WindowscheckBox"));

        verticalLayout->addWidget(WindowscheckBox);

        LinuxcheckBox = new QCheckBox(groupBox);
        LinuxcheckBox->setObjectName(QString::fromUtf8("LinuxcheckBox"));

        verticalLayout->addWidget(LinuxcheckBox);

        MaccheckBox = new QCheckBox(groupBox);
        MaccheckBox->setObjectName(QString::fromUtf8("MaccheckBox"));

        verticalLayout->addWidget(MaccheckBox);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        juicecheckBox = new QCheckBox(groupBox_2);
        juicecheckBox->setObjectName(QString::fromUtf8("juicecheckBox"));

        verticalLayout_3->addWidget(juicecheckBox);

        beercheckBox = new QCheckBox(groupBox_2);
        beercheckBox->setObjectName(QString::fromUtf8("beercheckBox"));

        verticalLayout_3->addWidget(beercheckBox);

        winecheckBox = new QCheckBox(groupBox_2);
        winecheckBox->setObjectName(QString::fromUtf8("winecheckBox"));

        verticalLayout_3->addWidget(winecheckBox);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AradioButton = new QRadioButton(groupBox_3);
        AradioButton->setObjectName(QString::fromUtf8("AradioButton"));

        verticalLayout_2->addWidget(AradioButton);

        BradioButton = new QRadioButton(groupBox_3);
        BradioButton->setObjectName(QString::fromUtf8("BradioButton"));

        verticalLayout_2->addWidget(BradioButton);

        CradioButton = new QRadioButton(groupBox_3);
        CradioButton->setObjectName(QString::fromUtf8("CradioButton"));

        verticalLayout_2->addWidget(CradioButton);


        verticalLayout_4->addWidget(groupBox_3);

        enterData = new QPushButton(Widget);
        enterData->setObjectName(QString::fromUtf8("enterData"));

        verticalLayout_4->addWidget(enterData);

        setButton = new QPushButton(Widget);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        verticalLayout_4->addWidget(setButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Exclusive Choose OS", nullptr));
        WindowscheckBox->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        LinuxcheckBox->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        MaccheckBox->setText(QCoreApplication::translate("Widget", "Mac", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Non-Exclusive Choose Drink", nullptr));
        juicecheckBox->setText(QCoreApplication::translate("Widget", "Juice", nullptr));
        beercheckBox->setText(QCoreApplication::translate("Widget", "Beer", nullptr));
        winecheckBox->setText(QCoreApplication::translate("Widget", "Wine", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "Choose Answer", nullptr));
        AradioButton->setText(QCoreApplication::translate("Widget", "A", nullptr));
        BradioButton->setText(QCoreApplication::translate("Widget", "B", nullptr));
        CradioButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        enterData->setText(QCoreApplication::translate("Widget", "Enter", nullptr));
        setButton->setText(QCoreApplication::translate("Widget", "Set State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
