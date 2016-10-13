#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "readpinthread.h"
#include "../wiringPi/wiringPi.h"

extern bool w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16;
extern bool w21,w22,w23,w24,w25,w26,w27,w28,w29,w30,w31;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initialization();   //初始化
    readPin = new ReadPinThread;
    readTime = new QTimer;

    connect(readTime,SIGNAL(timeout()),this,SLOT(pinReadt()));
    connect(readPin,SIGNAL(pinRead()),this,SLOT(pinReadw()));
}

MainWindow::~MainWindow()
{
    if(readTime->isActive())
    readTime->stop();
    readPin->stop();
    delete readTime;
    delete readPin;
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_pinOutBtn8_clicked()
{
    if(ui->pinOutBtn8->text() == "on")
    {
        ui->pinOutBtn8->setText("off");
        digitalWrite(8,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn8->setText("on");
        digitalWrite(8,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn9_clicked()
{
    if(ui->pinOutBtn9->text() == "on")
    {
        ui->pinOutBtn9->setText("off");
        digitalWrite(9,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn9->setText("on");
        digitalWrite(9,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn7_clicked()
{
    if(ui->pinOutBtn7->text() == "on")
    {
        ui->pinOutBtn7->setText("off");
        digitalWrite(7,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn7->setText("on");
        digitalWrite(7,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn0_clicked()
{
    if(ui->pinOutBtn0->text() == "on")
    {
        ui->pinOutBtn0->setText("off");
        digitalWrite(0,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn0->setText("on");
        digitalWrite(0,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn2_clicked()
{
    if(ui->pinOutBtn2->text() == "on")
    {
        ui->pinOutBtn2->setText("off");
        digitalWrite(2,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn2->setText("on");
        digitalWrite(2,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn3_clicked()
{
    if(ui->pinOutBtn3->text() == "on")
    {
        ui->pinOutBtn3->setText("off");
        digitalWrite(3,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn3->setText("on");
        digitalWrite(3,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn12_clicked()
{
    if(ui->pinOutBtn12->text() == "on")
    {
        ui->pinOutBtn12->setText("off");
        digitalWrite(12,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn12->setText("on");
        digitalWrite(12,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn13_clicked()
{
    if(ui->pinOutBtn13->text() == "on")
    {
        ui->pinOutBtn13->setText("off");
        digitalWrite(13,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn13->setText("on");
        digitalWrite(13,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn14_clicked()
{
    if(ui->pinOutBtn14->text() == "on")
    {
        ui->pinOutBtn14->setText("off");
        digitalWrite(14,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn14->setText("on");
        digitalWrite(14,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn30_clicked()
{
    if(ui->pinOutBtn30->text() == "on")
    {
        ui->pinOutBtn30->setText("off");
        digitalWrite(30,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn30->setText("on");
        digitalWrite(30,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn21_clicked()
{
    if(ui->pinOutBtn21->text() == "on")
    {
        ui->pinOutBtn21->setText("off");
        digitalWrite(21,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn21->setText("on");
        digitalWrite(21,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn22_clicked()
{
    if(ui->pinOutBtn22->text() == "on")
    {
        ui->pinOutBtn22->setText("off");
        digitalWrite(22,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn22->setText("on");
        digitalWrite(22,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn23_clicked()
{
    if(ui->pinOutBtn23->text() == "on")
    {
        ui->pinOutBtn23->setText("off");
        digitalWrite(23,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn23->setText("on");
        digitalWrite(23,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn24_clicked()
{
    if(ui->pinOutBtn24->text() == "on")
    {
        ui->pinOutBtn24->setText("off");
        digitalWrite(24,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn24->setText("on");
        digitalWrite(24,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn25_clicked()
{
    if(ui->pinOutBtn25->text() == "on")
    {
        ui->pinOutBtn25->setText("off");
        digitalWrite(25,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn25->setText("on");
        digitalWrite(25,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn15_clicked()
{
    if(ui->pinOutBtn15->text() == "on")
    {
        ui->pinOutBtn15->setText("off");
        digitalWrite(15,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn15->setText("on");
        digitalWrite(15,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn16_clicked()
{
    if(ui->pinOutBtn16->text() == "on")
    {
        ui->pinOutBtn16->setText("off");
        digitalWrite(16,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn16->setText("on");
        digitalWrite(16,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn1_clicked()
{
    if(ui->pinOutBtn1->text() == "on")
    {
        ui->pinOutBtn1->setText("off");
        digitalWrite(1,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn1->setText("on");
        digitalWrite(1,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn4_clicked()
{
    if(ui->pinOutBtn4->text() == "on")
    {
        ui->pinOutBtn4->setText("off");
        digitalWrite(4,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn4->setText("on");
        digitalWrite(4,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn5_clicked()
{
    if(ui->pinOutBtn5->text() == "on")
    {
        ui->pinOutBtn5->setText("off");
        digitalWrite(5,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn5->setText("on");
        digitalWrite(5,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn6_clicked()
{
    if(ui->pinOutBtn6->text() == "on")
    {
        ui->pinOutBtn6->setText("off");
        digitalWrite(6,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn6->setText("on");
        digitalWrite(6,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn10_clicked()
{
    if(ui->pinOutBtn10->text() == "on")
    {
        ui->pinOutBtn10->setText("off");
        digitalWrite(10,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn10->setText("on");
        digitalWrite(10,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn11_clicked()
{
    if(ui->pinOutBtn11->text() == "on")
    {
        ui->pinOutBtn11->setText("off");
        digitalWrite(11,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn11->setText("on");
        digitalWrite(11,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn31_clicked()
{
    if(ui->pinOutBtn31->text() == "on")
    {
        ui->pinOutBtn31->setText("off");
        digitalWrite(31,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn31->setText("on");
        digitalWrite(31,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn26_clicked()
{
    if(ui->pinOutBtn26->text() == "on")
    {
        ui->pinOutBtn26->setText("off");
        digitalWrite(26,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn26->setText("on");
        digitalWrite(26,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn27_clicked()
{
    if(ui->pinOutBtn27->text() == "on")
    {
        ui->pinOutBtn27->setText("off");
        digitalWrite(27,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn27->setText("on");
        digitalWrite(27,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn28_clicked()
{
    if(ui->pinOutBtn28->text() == "on")
    {
        ui->pinOutBtn28->setText("off");
        digitalWrite(28,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn28->setText("on");
        digitalWrite(28,LOW);  //低电平
    }
}

void MainWindow::on_pinOutBtn29_clicked()
{
    if(ui->pinOutBtn29->text() == "on")
    {
        ui->pinOutBtn29->setText("off");
        digitalWrite(29,HIGH); //高电平
    }
    else
    {
        ui->pinOutBtn29->setText("on");
        digitalWrite(29,LOW);  //低电平
    }
}

void MainWindow::initialization()
{
    wiringPiSetup();  //初始化

    for(int i = 0;i <= 16;i++)
    {
        pinMode(i,OUTPUT); //output模式
    }
    for(int j = 21;j <= 31;j++)
    {
        pinMode(j,OUTPUT); //output模式
    }
}

void MainWindow::pinReadw()
{
    if(w0)
    {
        ui->label0->setStyleSheet("color:red");
    }
    else
    {
        ui->label0->setStyleSheet("color:black");
    }
    if(w1)
    {
        ui->label1->setStyleSheet("color:red");
    }
    else
    {
        ui->label1->setStyleSheet("color:black");
    }
    if(w2)
    {
        ui->label2->setStyleSheet("color:red");
    }
    else
    {
        ui->label2->setStyleSheet("color:black");
    }
    if(w3)
    {
        ui->label3->setStyleSheet("color:red");
    }
    else
    {
        ui->label3->setStyleSheet("color:black");
    }
    if(w4)
    {
        ui->label4->setStyleSheet("color:red");
    }
    else
    {
        ui->label4->setStyleSheet("color:black");
    }
    if(w5)
    {
        ui->label5->setStyleSheet("color:red");
    }
    else
    {
        ui->label5->setStyleSheet("color:black");
    }
    if(w6)
    {
        ui->label6->setStyleSheet("color:red");
    }
    else
    {
        ui->label6->setStyleSheet("color:black");
    }
    if(w7)
    {
        ui->label7->setStyleSheet("color:red");
    }
    else
    {
        ui->label7->setStyleSheet("color:black");
    }
    if(w8)
    {
        ui->label8->setStyleSheet("color:red");
    }
    else
    {
        ui->label8->setStyleSheet("color:black");
    }
    if(w9)
    {
        ui->label9->setStyleSheet("color:red");
    }
    else
    {
        ui->label9->setStyleSheet("color:black");
    }
    if(w10)
    {
        ui->label10->setStyleSheet("color:red");
    }
    else
    {
        ui->label10->setStyleSheet("color:black");
    }
    if(w11)
    {
        ui->label11->setStyleSheet("color:red");
    }
    else
    {
        ui->label11->setStyleSheet("color:black");
    }
    if(w12)
    {
        ui->label12->setStyleSheet("color:red");
    }
    else
    {
        ui->label12->setStyleSheet("color:black");
    }
    if(w13)
    {
        ui->label13->setStyleSheet("color:red");
    }
    else
    {
        ui->label13->setStyleSheet("color:black");
    }
    if(w14)
    {
        ui->label14->setStyleSheet("color:red");
    }
    else
    {
        ui->label14->setStyleSheet("color:black");
    }
    if(w15)
    {
        ui->label15->setStyleSheet("color:red");
    }
    else
    {
        ui->label15->setStyleSheet("color:black");
    }
    if(w16)
    {
        ui->label16->setStyleSheet("color:red");
    }
    else
    {
        ui->label16->setStyleSheet("color:black");
    }
    if(w21)
    {
        ui->label21->setStyleSheet("color:red");
    }
    else
    {
        ui->label21->setStyleSheet("color:black");
    }
    if(w22)
    {
        ui->label22->setStyleSheet("color:red");
    }
    else
    {
        ui->label22->setStyleSheet("color:black");
    }
    if(w23)
    {
        ui->label23->setStyleSheet("color:red");
    }
    else
    {
        ui->label23->setStyleSheet("color:black");
    }
    if(w24)
    {
        ui->label24->setStyleSheet("color:red");
    }
    else
    {
        ui->label24->setStyleSheet("color:black");
    }
    if(w25)
    {
        ui->label25->setStyleSheet("color:red");
    }
    else
    {
        ui->label25->setStyleSheet("color:black");
    }
    if(w26)
    {
        ui->label26->setStyleSheet("color:red");
    }
    else
    {
        ui->label26->setStyleSheet("color:black");
    }
    if(w27)
    {
        ui->label27->setStyleSheet("color:red");
    }
    else
    {
        ui->label27->setStyleSheet("color:black");
    }
    if(w28)
    {
        ui->label28->setStyleSheet("color:red");
    }
    else
    {
        ui->label28->setStyleSheet("color:black");
    }
    if(w29)
    {
        ui->label29->setStyleSheet("color:red");
    }
    else
    {
        ui->label29->setStyleSheet("color:black");
    }
    if(w30)
    {
        ui->label30->setStyleSheet("color:red");
    }
    else
    {
        ui->label30->setStyleSheet("color:black");
    }
    if(w31)
    {
        ui->label31->setStyleSheet("color:red");
    }
    else
    {
        ui->label31->setStyleSheet("color:black");
    }

}

void MainWindow::on_radioButton_clicked()
{
    ui->pinOutBtn0->setDisabled(true);
    ui->pinOutBtn1->setDisabled(true);
    ui->pinOutBtn2->setDisabled(true);
    ui->pinOutBtn3->setDisabled(true);
    ui->pinOutBtn4->setDisabled(true);
    ui->pinOutBtn5->setDisabled(true);
    ui->pinOutBtn6->setDisabled(true);
    ui->pinOutBtn7->setDisabled(true);
    ui->pinOutBtn8->setDisabled(true);
    ui->pinOutBtn9->setDisabled(true);
    ui->pinOutBtn10->setDisabled(true);
    ui->pinOutBtn11->setDisabled(true);
    ui->pinOutBtn12->setDisabled(true);
    ui->pinOutBtn13->setDisabled(true);
    ui->pinOutBtn14->setDisabled(true);
    ui->pinOutBtn15->setDisabled(true);
    ui->pinOutBtn16->setDisabled(true);
    ui->pinOutBtn21->setDisabled(true);
    ui->pinOutBtn22->setDisabled(true);
    ui->pinOutBtn23->setDisabled(true);
    ui->pinOutBtn24->setDisabled(true);
    ui->pinOutBtn25->setDisabled(true);
    ui->pinOutBtn26->setDisabled(true);
    ui->pinOutBtn27->setDisabled(true);
    ui->pinOutBtn28->setDisabled(true);
    ui->pinOutBtn29->setDisabled(true);
    ui->pinOutBtn30->setDisabled(true);
    ui->pinOutBtn31->setDisabled(true);
    for(int m = 0;m <= 16;m++)
    {
        digitalWrite(m,LOW);
    }
    for(int n = 21;n <= 31;n++)
    {
        digitalWrite(n,LOW);
    }
    for(int i = 0;i <= 16;i++)
    {
        pinMode(i,INPUT); //输入模式
        pullUpDnControl(i,PUD_UP);
    }
    for(int j = 21;j <= 31;j++)
    {
        pinMode(j,INPUT); //输入模式
        pullUpDnControl(j,PUD_UP);
    }
        readTime->start(500);
        return;
}

void MainWindow::on_radioBtn_clicked()
{
    if(readTime->isActive())
    readTime->stop();
    readPin->stop();
    ui->pinOutBtn0->setEnabled(true);
    ui->pinOutBtn1->setEnabled(true);
    ui->pinOutBtn2->setEnabled(true);
    ui->pinOutBtn3->setEnabled(true);
    ui->pinOutBtn4->setEnabled(true);
    ui->pinOutBtn5->setEnabled(true);
    ui->pinOutBtn6->setEnabled(true);
    ui->pinOutBtn7->setEnabled(true);
    ui->pinOutBtn8->setEnabled(true);
    ui->pinOutBtn9->setEnabled(true);
    ui->pinOutBtn10->setEnabled(true);
    ui->pinOutBtn11->setEnabled(true);
    ui->pinOutBtn12->setEnabled(true);
    ui->pinOutBtn13->setEnabled(true);
    ui->pinOutBtn14->setEnabled(true);
    ui->pinOutBtn15->setEnabled(true);
    ui->pinOutBtn16->setEnabled(true);
    ui->pinOutBtn21->setEnabled(true);
    ui->pinOutBtn22->setEnabled(true);
    ui->pinOutBtn23->setEnabled(true);
    ui->pinOutBtn24->setEnabled(true);
    ui->pinOutBtn25->setEnabled(true);
    ui->pinOutBtn26->setEnabled(true);
    ui->pinOutBtn27->setEnabled(true);
    ui->pinOutBtn28->setEnabled(true);
    ui->pinOutBtn29->setEnabled(true);
    ui->pinOutBtn30->setEnabled(true);
    ui->pinOutBtn31->setEnabled(true);

    ui->pinOutBtn0->setText("on");
    ui->pinOutBtn1->setText("on");
    ui->pinOutBtn2->setText("on");
    ui->pinOutBtn3->setText("on");
    ui->pinOutBtn4->setText("on");
    ui->pinOutBtn5->setText("on");
    ui->pinOutBtn6->setText("on");
    ui->pinOutBtn7->setText("on");
    ui->pinOutBtn8->setText("on");
    ui->pinOutBtn9->setText("on");
    ui->pinOutBtn10->setText("on");
    ui->pinOutBtn11->setText("on");
    ui->pinOutBtn12->setText("on");
    ui->pinOutBtn13->setText("on");
    ui->pinOutBtn14->setText("on");
    ui->pinOutBtn15->setText("on");
    ui->pinOutBtn16->setText("on");
    ui->pinOutBtn21->setText("on");
    ui->pinOutBtn22->setText("on");
    ui->pinOutBtn23->setText("on");
    ui->pinOutBtn24->setText("on");
    ui->pinOutBtn25->setText("on");
    ui->pinOutBtn26->setText("on");
    ui->pinOutBtn27->setText("on");
    ui->pinOutBtn28->setText("on");
    ui->pinOutBtn29->setText("on");
    ui->pinOutBtn30->setText("on");
    ui->pinOutBtn31->setText("on");
    for(int i = 0;i <= 16;i++)
    {
        pinMode(i,OUTPUT); //output模式
    }
    for(int j = 21;j <= 31;j++)
    {
        pinMode(j,OUTPUT); //output模式
    }

}

void MainWindow::pinReadt()
{
    readPin->disStop();
    readPin->run();
}
