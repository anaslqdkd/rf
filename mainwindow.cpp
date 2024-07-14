#include "mainwindow.h"
#include <qglobal.h>
#include <qlabel.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    setWindowTitle("demo");

    resize(800, 600);
}

MainWindow::~MainWindow() {
}

