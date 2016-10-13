#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

class ReadPinThread;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initialization();



private slots:
    void pinReadt();

    void pinReadw();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_pinOutBtn8_clicked();

    void on_pinOutBtn9_clicked();

    void on_pinOutBtn7_clicked();

    void on_pinOutBtn0_clicked();

    void on_pinOutBtn2_clicked();

    void on_pinOutBtn3_clicked();

    void on_pinOutBtn12_clicked();

    void on_pinOutBtn13_clicked();

    void on_pinOutBtn14_clicked();

    void on_pinOutBtn30_clicked();

    void on_pinOutBtn21_clicked();

    void on_pinOutBtn22_clicked();

    void on_pinOutBtn23_clicked();

    void on_pinOutBtn24_clicked();

    void on_pinOutBtn25_clicked();

    void on_pinOutBtn15_clicked();

    void on_pinOutBtn16_clicked();

    void on_pinOutBtn1_clicked();

    void on_pinOutBtn4_clicked();

    void on_pinOutBtn5_clicked();

    void on_pinOutBtn6_clicked();

    void on_pinOutBtn10_clicked();

    void on_pinOutBtn11_clicked();

    void on_pinOutBtn31_clicked();

    void on_pinOutBtn26_clicked();

    void on_pinOutBtn27_clicked();

    void on_pinOutBtn28_clicked();

    void on_pinOutBtn29_clicked();

    void on_radioButton_clicked();

    void on_radioBtn_clicked();

private:
    Ui::MainWindow *ui;
    ReadPinThread *readPin;
    QTimer *readTime;
};

#endif // MAINWINDOW_H
