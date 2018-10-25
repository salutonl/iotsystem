#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcd_humi->setNumDigits(8);
    ui->lcd_humi->setPalette(Qt::black);
    ui->lcd_temp->setNumDigits(8);
    ui->lcd_temp->setPalette(Qt::black);
    ui->lcd_lig->setNumDigits(8);
    ui->lcd_lig->setPalette(Qt::black);
    ui->lcd_dis->setNumDigits(8);
    ui->lcd_dis->setPalette(Qt::black);
    ui->lcd_smok->setNumDigits(8);
    ui->lcd_smok->setPalette(Qt::black);
    ui->ring->setNumDigits(8);
    ui->ring->setPalette(Qt::black);
    ui->id_judge->setNumDigits(8);
    ui->id_judge->setPalette(Qt::black);
    ui->text_log->setReadOnly(true);
    pe_black.setColor(QPalette::WindowText,Qt::black);
    pe_red.setColor(QPalette::WindowText,Qt::red);

    serial_server = new SerialService();

    all_the_msg = new All_the_msg();

    connect(this->serial_server, SIGNAL(receiveMsgFromSerial(QByteArray)), this, SLOT(processMsgFromSerial(QByteArray)));

    connect(this, SIGNAL(addLog(QString)), this, SLOT(showLog(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showLog(QString log)
{
    ui->text_log->append(log);
    updateTempHumiLig();
}

void MainWindow::updateTempHumiLig()
{
    ui->lcd_temp->display(all_the_msg->getTemperature());
    ui->lcd_humi->display(all_the_msg->getHumidity());
    ui->lcd_lig->display(QString::number(all_the_msg->getLight(), 'f', 1));
}
void MainWindow::updatesmok()
{
    ui->lcd_smok->display(all_the_msg->getsmok());
}
void MainWindow::updateid()
{
    ui->id_judge->display(all_the_msg->getid());
}

void MainWindow::updatedis()
{
    ui->lcd_dis->display(all_the_msg->getdis());
    int flag = all_the_msg->getdis();
    if(flag < 50)
    {
        QByteArray msg = "\x40\x06\x01\x06\x0b\x58";
        serial_server->writeToSerial(msg);
        addLog("motor backward");
        addLog(msg.toHex());
    }
}
void MainWindow::updatewarning()
{
    ui->ring->display(all_the_msg->getwarning());
    if(all_the_msg->getwarning() == 01)
    {
        addLog("warning!");
    }
}

void MainWindow::processMsgFromSerial(QByteArray msg)
{
    if(msg.length() < 6)
        return;
    //温湿亮度
    if(msg[3] == 0x02 && msg[4] == 0x01)
    {
        all_the_msg->setValue(msg);
        updateTempHumiLig();
    }

    if(msg[3] == 0x04 && msg[4] == 0x01)
    {
        //yanwu
        all_the_msg->setsmok(msg);
        updatesmok();
    }
    if(msg[3] == 0x08 && msg[4] == 0x01)
        {
        //dis
        all_the_msg->setdis(msg);
        updatedis();
    }
    if(msg[3] == 0x05 &&msg[4] == 0x01)
    {
        all_the_msg->setwarning(msg);
        updatewarning();
    }
    if(msg[3] == 0x07 && msg[4] == 0x01)
    {
        all_the_msg->setid(msg);
        updateid();
    }
    emit addLog(msg.toHex());
}



void MainWindow::on_btn_serial_clicked()
{
    changeSerial(serial_server->getComState());
}



void MainWindow::changeSerial(int state)
{
    //对传入的参数取反操作
    if(1 == state)
    {
        if(serial_server->closeCom())
        {
            ui->btn_serial->setText("open");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_WHITE);
            emit addLog("close serial port success");
        }
        else
            emit addLog("close serial port failed");

    }
    else if(0 == state)
    {
        if(serial_server->openCom())
        {
            ui->btn_serial->setText("close");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
            emit addLog("open serial port success");
        }
        else
            emit addLog("open serial port failed");

    }
}



void MainWindow::on_motor_for_click_clicked()
{

   if(serial_server->getComState() == 1){

                serial_server->my_com->write(motor_for,6);
        addLog("mortor forward!");
        addLog(motor_for.toHex());
    }
    else
        addLog("serial not open!");


}

void MainWindow::on_motor_back_click_clicked()
{
    if(serial_server->getComState() == 1)
    {

    serial_server->my_com->write(motor_back,6);

        addLog("motor backward");
        addLog(motor_back.toHex());
    }
    else
        addLog("serial not open!");

}

void MainWindow::on_motor_stop_clicked()
{
    if(serial_server->getComState() == 1)
    {
       serial_server->my_com->write(motor_stop,6);
        addLog("motor stop");
        addLog(motor_stop);
    }
    else
        addLog("serial not open!");

}

void MainWindow::on_pushButton_clicked()
{

    if(serial_server->getComState() == 1)
    {
       addLog("the door is opened");
    }
    else
        addLog("serial not open!");
}
