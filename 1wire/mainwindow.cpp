#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "onewirethread.h"
#include "../wiringPi/wiringPi.h"

float temp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wiringPiSetup();    //init ports

    oneWireT = new OneWireThread;
    timer = new QTimer;

    connect(oneWireT,SIGNAL(getTempValue()),this,SLOT(showTempValue()));
    connect(timer,SIGNAL(timeout()),this,SLOT(oneWireTStart()));
    ui->labelTemp->setText("");
    QFont ft;
    ft.setPointSize(20);
    ui->labelTemp->setFont(ft);
}

MainWindow::~MainWindow()
{
    if(timer->isActive())
     timer->stop();
     oneWireT->stop();
    delete timer;
    delete oneWireT;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton->text() == "Start")
    {
        ui->pushButton->setText("Stop");
        timer->start(1000);  //start timer
    }
    else
    {
        ui->pushButton->setText("Start");
        timer->stop();      //stop timer
    }
}

void MainWindow::showTempValue()
{
    QString s = QString("%1").arg(temp);

    ui->labelTemp->setText(s);
}



void MainWindow::oneWireTStart()
{
    oneWireT->setStopFlag(false);   //set stop flag
    oneWireT->start();              //start thread
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}
