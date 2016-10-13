/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabGpio;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label8;
    QLabel *label9;
    QLabel *label7;
    QSpacerItem *verticalSpacer_21;
    QLabel *label0;
    QLabel *label2;
    QLabel *label3;
    QSpacerItem *verticalSpacer_22;
    QLabel *label12;
    QLabel *label13;
    QLabel *label14;
    QSpacerItem *verticalSpacer_24;
    QLabel *label30;
    QLabel *label21;
    QLabel *label22;
    QLabel *label23;
    QLabel *label24;
    QLabel *label25;
    QSpacerItem *verticalSpacer_23;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pinOutBtn8;
    QPushButton *pinOutBtn9;
    QPushButton *pinOutBtn7;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pinOutBtn0;
    QPushButton *pinOutBtn2;
    QPushButton *pinOutBtn3;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pinOutBtn12;
    QPushButton *pinOutBtn13;
    QPushButton *pinOutBtn14;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pinOutBtn30;
    QPushButton *pinOutBtn21;
    QPushButton *pinOutBtn22;
    QPushButton *pinOutBtn23;
    QPushButton *pinOutBtn24;
    QPushButton *pinOutBtn25;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioBtn;
    QRadioButton *radioButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_19;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_14;
    QPushButton *pinOutBtn15;
    QPushButton *pinOutBtn16;
    QPushButton *pinOutBtn1;
    QSpacerItem *verticalSpacer_15;
    QPushButton *pinOutBtn4;
    QPushButton *pinOutBtn5;
    QSpacerItem *verticalSpacer_16;
    QPushButton *pinOutBtn6;
    QPushButton *pinOutBtn10;
    QPushButton *pinOutBtn11;
    QPushButton *pinOutBtn31;
    QSpacerItem *verticalSpacer_17;
    QPushButton *pinOutBtn26;
    QSpacerItem *verticalSpacer_18;
    QPushButton *pinOutBtn27;
    QPushButton *pinOutBtn28;
    QPushButton *pinOutBtn29;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_25;
    QLabel *label15;
    QLabel *label16;
    QLabel *label1;
    QSpacerItem *verticalSpacer_26;
    QLabel *label4;
    QLabel *label5;
    QSpacerItem *verticalSpacer_27;
    QLabel *label6;
    QLabel *label10;
    QLabel *label11;
    QLabel *label31;
    QSpacerItem *verticalSpacer_29;
    QLabel *label26;
    QSpacerItem *verticalSpacer_28;
    QLabel *label27;
    QLabel *label28;
    QLabel *label29;
    QSpacerItem *horizontalSpacer;
    QWidget *tabInfo;
    QMenuBar *menuBar;
    QMenu *menu_About;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1158, 781);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1131, 671));
        tabGpio = new QWidget();
        tabGpio->setObjectName(QStringLiteral("tabGpio"));
        horizontalLayoutWidget = new QWidget(tabGpio);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 16, 1090, 591));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label8 = new QLabel(horizontalLayoutWidget);
        label8->setObjectName(QStringLiteral("label8"));
        QFont font;
        font.setPointSize(18);
        label8->setFont(font);

        verticalLayout_6->addWidget(label8);

        label9 = new QLabel(horizontalLayoutWidget);
        label9->setObjectName(QStringLiteral("label9"));
        label9->setFont(font);

        verticalLayout_6->addWidget(label9);

        label7 = new QLabel(horizontalLayoutWidget);
        label7->setObjectName(QStringLiteral("label7"));
        label7->setFont(font);

        verticalLayout_6->addWidget(label7);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_21);

        label0 = new QLabel(horizontalLayoutWidget);
        label0->setObjectName(QStringLiteral("label0"));
        label0->setFont(font);

        verticalLayout_6->addWidget(label0);

        label2 = new QLabel(horizontalLayoutWidget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setFont(font);

        verticalLayout_6->addWidget(label2);

        label3 = new QLabel(horizontalLayoutWidget);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setFont(font);

        verticalLayout_6->addWidget(label3);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_22);

        label12 = new QLabel(horizontalLayoutWidget);
        label12->setObjectName(QStringLiteral("label12"));
        label12->setFont(font);

        verticalLayout_6->addWidget(label12);

        label13 = new QLabel(horizontalLayoutWidget);
        label13->setObjectName(QStringLiteral("label13"));
        label13->setFont(font);

        verticalLayout_6->addWidget(label13);

        label14 = new QLabel(horizontalLayoutWidget);
        label14->setObjectName(QStringLiteral("label14"));
        label14->setFont(font);

        verticalLayout_6->addWidget(label14);

        verticalSpacer_24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_24);

        label30 = new QLabel(horizontalLayoutWidget);
        label30->setObjectName(QStringLiteral("label30"));
        label30->setFont(font);

        verticalLayout_6->addWidget(label30);

        label21 = new QLabel(horizontalLayoutWidget);
        label21->setObjectName(QStringLiteral("label21"));
        label21->setFont(font);

        verticalLayout_6->addWidget(label21);

        label22 = new QLabel(horizontalLayoutWidget);
        label22->setObjectName(QStringLiteral("label22"));
        label22->setFont(font);

        verticalLayout_6->addWidget(label22);

        label23 = new QLabel(horizontalLayoutWidget);
        label23->setObjectName(QStringLiteral("label23"));
        label23->setFont(font);

        verticalLayout_6->addWidget(label23);

        label24 = new QLabel(horizontalLayoutWidget);
        label24->setObjectName(QStringLiteral("label24"));
        label24->setFont(font);

        verticalLayout_6->addWidget(label24);

        label25 = new QLabel(horizontalLayoutWidget);
        label25->setObjectName(QStringLiteral("label25"));
        label25->setFont(font);

        verticalLayout_6->addWidget(label25);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_23);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pinOutBtn8 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn8->setObjectName(QStringLiteral("pinOutBtn8"));
        pinOutBtn8->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn8);

        pinOutBtn9 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn9->setObjectName(QStringLiteral("pinOutBtn9"));
        pinOutBtn9->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn9);

        pinOutBtn7 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn7->setObjectName(QStringLiteral("pinOutBtn7"));
        pinOutBtn7->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        pinOutBtn0 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn0->setObjectName(QStringLiteral("pinOutBtn0"));
        pinOutBtn0->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn0);

        pinOutBtn2 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn2->setObjectName(QStringLiteral("pinOutBtn2"));
        pinOutBtn2->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn2);

        pinOutBtn3 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn3->setObjectName(QStringLiteral("pinOutBtn3"));
        pinOutBtn3->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pinOutBtn12 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn12->setObjectName(QStringLiteral("pinOutBtn12"));
        pinOutBtn12->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn12);

        pinOutBtn13 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn13->setObjectName(QStringLiteral("pinOutBtn13"));
        pinOutBtn13->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn13);

        pinOutBtn14 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn14->setObjectName(QStringLiteral("pinOutBtn14"));
        pinOutBtn14->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        pinOutBtn30 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn30->setObjectName(QStringLiteral("pinOutBtn30"));
        pinOutBtn30->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn30);

        pinOutBtn21 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn21->setObjectName(QStringLiteral("pinOutBtn21"));
        pinOutBtn21->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn21);

        pinOutBtn22 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn22->setObjectName(QStringLiteral("pinOutBtn22"));
        pinOutBtn22->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn22);

        pinOutBtn23 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn23->setObjectName(QStringLiteral("pinOutBtn23"));
        pinOutBtn23->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn23);

        pinOutBtn24 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn24->setObjectName(QStringLiteral("pinOutBtn24"));
        pinOutBtn24->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn24);

        pinOutBtn25 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn25->setObjectName(QStringLiteral("pinOutBtn25"));
        pinOutBtn25->setEnabled(true);

        verticalLayout_2->addWidget(pinOutBtn25);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioBtn = new QRadioButton(horizontalLayoutWidget);
        radioBtn->setObjectName(QStringLiteral("radioBtn"));
        radioBtn->setChecked(true);

        horizontalLayout_2->addWidget(radioBtn);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_2->addWidget(radioButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/gpio.jpg")));

        verticalLayout_5->addWidget(label);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_19);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_14);

        pinOutBtn15 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn15->setObjectName(QStringLiteral("pinOutBtn15"));
        pinOutBtn15->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn15);

        pinOutBtn16 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn16->setObjectName(QStringLiteral("pinOutBtn16"));
        pinOutBtn16->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn16);

        pinOutBtn1 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn1->setObjectName(QStringLiteral("pinOutBtn1"));
        pinOutBtn1->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_15);

        pinOutBtn4 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn4->setObjectName(QStringLiteral("pinOutBtn4"));
        pinOutBtn4->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn4);

        pinOutBtn5 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn5->setObjectName(QStringLiteral("pinOutBtn5"));
        pinOutBtn5->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn5);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_16);

        pinOutBtn6 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn6->setObjectName(QStringLiteral("pinOutBtn6"));
        pinOutBtn6->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn6);

        pinOutBtn10 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn10->setObjectName(QStringLiteral("pinOutBtn10"));
        pinOutBtn10->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn10);

        pinOutBtn11 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn11->setObjectName(QStringLiteral("pinOutBtn11"));
        pinOutBtn11->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn11);

        pinOutBtn31 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn31->setObjectName(QStringLiteral("pinOutBtn31"));
        pinOutBtn31->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn31);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_17);

        pinOutBtn26 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn26->setObjectName(QStringLiteral("pinOutBtn26"));
        pinOutBtn26->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn26);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_18);

        pinOutBtn27 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn27->setObjectName(QStringLiteral("pinOutBtn27"));
        pinOutBtn27->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn27);

        pinOutBtn28 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn28->setObjectName(QStringLiteral("pinOutBtn28"));
        pinOutBtn28->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn28);

        pinOutBtn29 = new QPushButton(horizontalLayoutWidget);
        pinOutBtn29->setObjectName(QStringLiteral("pinOutBtn29"));
        pinOutBtn29->setEnabled(true);

        verticalLayout_4->addWidget(pinOutBtn29);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_25);

        label15 = new QLabel(horizontalLayoutWidget);
        label15->setObjectName(QStringLiteral("label15"));
        label15->setFont(font);

        verticalLayout_7->addWidget(label15);

        label16 = new QLabel(horizontalLayoutWidget);
        label16->setObjectName(QStringLiteral("label16"));
        label16->setFont(font);

        verticalLayout_7->addWidget(label16);

        label1 = new QLabel(horizontalLayoutWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setFont(font);

        verticalLayout_7->addWidget(label1);

        verticalSpacer_26 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_26);

        label4 = new QLabel(horizontalLayoutWidget);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setFont(font);

        verticalLayout_7->addWidget(label4);

        label5 = new QLabel(horizontalLayoutWidget);
        label5->setObjectName(QStringLiteral("label5"));
        label5->setFont(font);

        verticalLayout_7->addWidget(label5);

        verticalSpacer_27 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_27);

        label6 = new QLabel(horizontalLayoutWidget);
        label6->setObjectName(QStringLiteral("label6"));
        label6->setFont(font);

        verticalLayout_7->addWidget(label6);

        label10 = new QLabel(horizontalLayoutWidget);
        label10->setObjectName(QStringLiteral("label10"));
        label10->setFont(font);

        verticalLayout_7->addWidget(label10);

        label11 = new QLabel(horizontalLayoutWidget);
        label11->setObjectName(QStringLiteral("label11"));
        label11->setFont(font);

        verticalLayout_7->addWidget(label11);

        label31 = new QLabel(horizontalLayoutWidget);
        label31->setObjectName(QStringLiteral("label31"));
        label31->setFont(font);

        verticalLayout_7->addWidget(label31);

        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_29);

        label26 = new QLabel(horizontalLayoutWidget);
        label26->setObjectName(QStringLiteral("label26"));
        label26->setFont(font);

        verticalLayout_7->addWidget(label26);

        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_28);

        label27 = new QLabel(horizontalLayoutWidget);
        label27->setObjectName(QStringLiteral("label27"));
        label27->setFont(font);

        verticalLayout_7->addWidget(label27);

        label28 = new QLabel(horizontalLayoutWidget);
        label28->setObjectName(QStringLiteral("label28"));
        label28->setFont(font);

        verticalLayout_7->addWidget(label28);

        label29 = new QLabel(horizontalLayoutWidget);
        label29->setObjectName(QStringLiteral("label29"));
        label29->setFont(font);

        verticalLayout_7->addWidget(label29);


        horizontalLayout->addLayout(verticalLayout_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tabWidget->addTab(tabGpio, QString());
        tabInfo = new QWidget();
        tabInfo->setObjectName(QStringLiteral("tabInfo"));
        tabWidget->addTab(tabInfo, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1158, 25));
        menu_About = new QMenu(menuBar);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_About->menuAction());
        menu_About->addAction(actionAbout);
        menu_About->addSeparator();
        menu_About->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        label8->setText(QApplication::translate("MainWindow", "BCM: 2 wPi: 8", 0));
        label9->setText(QApplication::translate("MainWindow", "BCM: 3 wPi: 9", 0));
        label7->setText(QApplication::translate("MainWindow", "BCM: 4 wPi: 7", 0));
        label0->setText(QApplication::translate("MainWindow", "BCM:17 wPi: 0", 0));
        label2->setText(QApplication::translate("MainWindow", "BCM:27 wPi: 2", 0));
        label3->setText(QApplication::translate("MainWindow", "BCM:22 wPi: 3", 0));
        label12->setText(QApplication::translate("MainWindow", "BCM:10 wPi:12", 0));
        label13->setText(QApplication::translate("MainWindow", "BCM: 9 wPi:13", 0));
        label14->setText(QApplication::translate("MainWindow", "BCM:11 wPi:14", 0));
        label30->setText(QApplication::translate("MainWindow", "BCM: 0 wPi:30", 0));
        label21->setText(QApplication::translate("MainWindow", "BCM: 5 wPi:21", 0));
        label22->setText(QApplication::translate("MainWindow", "BCM: 6 wPi:22", 0));
        label23->setText(QApplication::translate("MainWindow", "BCM:13 wPi:23", 0));
        label24->setText(QApplication::translate("MainWindow", "BCM:19 wPi:24", 0));
        label25->setText(QApplication::translate("MainWindow", "BCM:26 wPi:25", 0));
        pinOutBtn8->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn9->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn7->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn0->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn2->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn3->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn12->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn13->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn14->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn30->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn21->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn22->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn23->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn24->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn25->setText(QApplication::translate("MainWindow", "on", 0));
        radioBtn->setText(QApplication::translate("MainWindow", "Output", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Input", 0));
        label->setText(QString());
        pinOutBtn15->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn16->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn1->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn4->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn5->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn6->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn10->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn11->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn31->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn26->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn27->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn28->setText(QApplication::translate("MainWindow", "on", 0));
        pinOutBtn29->setText(QApplication::translate("MainWindow", "on", 0));
        label15->setText(QApplication::translate("MainWindow", "wPi:15 BCM: 14", 0));
        label16->setText(QApplication::translate("MainWindow", "wPi:16 BCM: 15", 0));
        label1->setText(QApplication::translate("MainWindow", "wPi: 1 BCM: 18", 0));
        label4->setText(QApplication::translate("MainWindow", "wPi: 4 BCM: 23", 0));
        label5->setText(QApplication::translate("MainWindow", "wPi: 5 BCM: 24", 0));
        label6->setText(QApplication::translate("MainWindow", "wPi: 6 BCM: 25", 0));
        label10->setText(QApplication::translate("MainWindow", "wPi:10 BCM:  8", 0));
        label11->setText(QApplication::translate("MainWindow", "wPi:11 BCM:  7", 0));
        label31->setText(QApplication::translate("MainWindow", "wPi:31 BCM:  1", 0));
        label26->setText(QApplication::translate("MainWindow", "wPi:26 BCM: 12", 0));
        label27->setText(QApplication::translate("MainWindow", "wPi:27 BCM: 16", 0));
        label28->setText(QApplication::translate("MainWindow", "wPi:28 BCM: 20", 0));
        label29->setText(QApplication::translate("MainWindow", "wPi:29 BCM: 21", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGpio), QApplication::translate("MainWindow", "GPIO", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QApplication::translate("MainWindow", "INFO", 0));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
