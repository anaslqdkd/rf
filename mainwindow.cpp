#include "mainwindow.h"
#include <fstream>
#include <qaction.h>
#include <qglobal.h>
#include <qlabel.h>
#include <QPushButton>
#include <qmenu.h>
#include <qpushbutton.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    setWindowTitle("demo");
    fileButton = new QPushButton("File", this);
    menu = new QMenu(this);
    QAction *newFile = new QAction("New file", this);
    QAction *open = new QAction("Open", this);
    menu->addAction(newFile);
    menu->addAction(open);
    connect(newFile, &QAction::triggered, this, &MainWindow::onAction);
    connect(newFile, &QAction::triggered, this, &MainWindow::onAction1);
    fileButton->setMenu(menu);

    resize(800, 600);
}

void MainWindow::onAction(){

    std::ofstream file("temp.txt");
    if (file.is_open()){
        file.close();
    }
    
}

void MainWindow::onAction1(){
    
}



MainWindow::~MainWindow() {
}

