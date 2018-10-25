#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QByteArray>
#include <QString>

#include "serialservice.h"

#include "all_the_msg.h"

#define BACKGROUND_COLOR_GREEN "background-color: rgb(0, 255, 0);"
#define BACKGROUND_COLOR_WHITE "background-color: rgb(255, 255, 255);"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateTempHumiLig();
    void changeSerial(int);
    void updatesmok();
    void updatedis();
    void updatewarning();
    void updateid();
signals:
    void addLog(QString);

private slots:
    void processMsgFromSerial(QByteArray);

    void showLog(QString);

    void on_btn_serial_clicked();

    void on_motor_for_click_clicked();

    void on_motor_back_click_clicked();

    void on_motor_stop_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SerialService *serial_server;

    Posix_QextSerialPort *my_com1;
    All_the_msg *all_the_msg;

    QPalette pe_red;
    QPalette pe_black;
    QByteArray fori;
};
const QByteArray motor_for("\x40\x06\x01\x06\x0a\x57",6);
const QByteArray motor_back("\x40\x06\x01\x06\x0b\x58",6);
const QByteArray motor_stop("\x40\x06\x01\x06\x0b\x59",6);
#endif // MAINWINDOW_H
