#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton * button = new QPushButton("Hello",this);
    setCentralWidget(button);

    QAction *quitAction = new QAction("Quit");
    connect(quitAction,&QAction::triggered,[=](){
        QApplication::quit();
    });

    QMenu *fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);


    //menuBar()->addMenu("File");
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    statusBar()->showMessage("Uploading files...",3000);
}

MainWindow::~MainWindow()
{
}

QSize MainWindow::sizeHint() const
{
    return QSize(800,500);
}

