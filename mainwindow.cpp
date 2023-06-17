
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>
#include<QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QLCDNumber(8)
{
    //ui->setupUi(this);


    QTimer* timer=new QTimer(this);
    connect(timer, &QTimer::timeout, this,&MainWindow:: showtime);
    timer->start(1000);
    setMinimumSize(400, 200);
    setSegmentStyle(Filled);
    setPalette(Qt::cyan);

    //resize(445,100);
    setWindowTitle("Годинник Алли Коханюк");
    showtime();
}

void MainWindow:: showtime(){

    QString text=QDateTime::currentDateTime().toString("hh:mm:ss");
    display(text);
}


MainWindow::~MainWindow()
{
    delete ui;
}


