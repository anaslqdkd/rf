#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <qevent.h>
#include <QMenu>
#include <qpushbutton.h>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onAction();
    void onAction1();

private:
    QPushButton *fileButton;
    QMenu *menu;
};


#endif 

