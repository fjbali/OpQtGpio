#-------------------------------------------------
#
# Project created by QtCreator 2016-10-10T06:55:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gpio
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../wiringPi/ads1115.c \
    ../wiringPi/drcSerial.c \
    ../wiringPi/max31855.c \
    ../wiringPi/max5322.c \
    ../wiringPi/mcp23008.c \
    ../wiringPi/mcp23016.c \
    ../wiringPi/mcp23017.c \
    ../wiringPi/mcp23s08.c \
    ../wiringPi/mcp23s17.c \
    ../wiringPi/mcp3002.c \
    ../wiringPi/mcp3004.c \
    ../wiringPi/mcp3422.c \
    ../wiringPi/mcp4802.c \
    ../wiringPi/pcf8574.c \
    ../wiringPi/pcf8591.c \
    ../wiringPi/piHiPri.c \
    ../wiringPi/piThread.c \
    ../wiringPi/sn3218.c \
    ../wiringPi/softPwm.c \
    ../wiringPi/softServo.c \
    ../wiringPi/softTone.c \
    ../wiringPi/sr595.c \
    ../wiringPi/wiringPi.c \
    ../wiringPi/wiringPiI2C.c \
    ../wiringPi/wiringPiSPI.c \
    ../wiringPi/wiringSerial.c \
    ../wiringPi/wiringShift.c \
    ../wiringPi/wpiExtensions.c \
    readpinthread.cpp

HEADERS  += mainwindow.h \
    ../wiringPi/ads1115.h \
    ../wiringPi/drcSerial.h \
    ../wiringPi/max31855.h \
    ../wiringPi/max5322.h \
    ../wiringPi/mcp23008.h \
    ../wiringPi/mcp23016.h \
    ../wiringPi/mcp23016reg.h \
    ../wiringPi/mcp23017.h \
    ../wiringPi/mcp23s08.h \
    ../wiringPi/mcp23s17.h \
    ../wiringPi/mcp23x08.h \
    ../wiringPi/mcp23x0817.h \
    ../wiringPi/mcp3002.h \
    ../wiringPi/mcp3004.h \
    ../wiringPi/mcp3422.h \
    ../wiringPi/mcp4802.h \
    ../wiringPi/pcf8574.h \
    ../wiringPi/pcf8591.h \
    ../wiringPi/sn3218.h \
    ../wiringPi/softPwm.h \
    ../wiringPi/softServo.h \
    ../wiringPi/softTone.h \
    ../wiringPi/sr595.h \
    ../wiringPi/wiringPi.h \
    ../wiringPi/wiringPiI2C.h \
    ../wiringPi/wiringPiSPI.h \
    ../wiringPi/wiringSerial.h \
    ../wiringPi/wiringShift.h \
    ../wiringPi/wpiExtensions.h \
    readpinthread.h


FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
