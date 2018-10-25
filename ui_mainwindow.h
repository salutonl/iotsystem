/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jul 21 09:19:12 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *motor_for_click;
    QPushButton *motor_back_click;
    QPushButton *motor_stop;
    QTextEdit *text_log;
    QFrame *frame_17;
    QLCDNumber *lcd_temp;
    QFrame *frame_18;
    QLCDNumber *lcd_humi;
    QFrame *frame_19;
    QLCDNumber *lcd_lig;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *btn_serial;
    QLabel *label_4;
    QFrame *frame_2;
    QLCDNumber *lcd_dis;
    QLabel *label_5;
    QLCDNumber *lcd_smok;
    QLabel *label_6;
    QLabel *label_7;
    QLCDNumber *ring;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *label_9;
    QLCDNumber *id_judge;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(733, 543);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 232, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 10, 451, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        motor_for_click = new QPushButton(frame);
        motor_for_click->setObjectName(QString::fromUtf8("motor_for_click"));
        motor_for_click->setGeometry(QRect(340, 20, 92, 27));
        motor_back_click = new QPushButton(frame);
        motor_back_click->setObjectName(QString::fromUtf8("motor_back_click"));
        motor_back_click->setGeometry(QRect(190, 20, 92, 27));
        motor_stop = new QPushButton(frame);
        motor_stop->setObjectName(QString::fromUtf8("motor_stop"));
        motor_stop->setGeometry(QRect(30, 20, 92, 27));
        text_log = new QTextEdit(centralWidget);
        text_log->setObjectName(QString::fromUtf8("text_log"));
        text_log->setGeometry(QRect(300, 170, 171, 181));
        text_log->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        frame_17 = new QFrame(centralWidget);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(50, 120, 111, 31));
        frame_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        lcd_temp = new QLCDNumber(frame_17);
        lcd_temp->setObjectName(QString::fromUtf8("lcd_temp"));
        lcd_temp->setGeometry(QRect(30, 0, 81, 31));
        lcd_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_18 = new QFrame(centralWidget);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setGeometry(QRect(50, 170, 111, 31));
        frame_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        lcd_humi = new QLCDNumber(frame_18);
        lcd_humi->setObjectName(QString::fromUtf8("lcd_humi"));
        lcd_humi->setGeometry(QRect(30, 0, 81, 31));
        lcd_humi->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_19 = new QFrame(centralWidget);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(50, 240, 111, 31));
        frame_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        lcd_lig = new QLCDNumber(frame_19);
        lcd_lig->setObjectName(QString::fromUtf8("lcd_lig"));
        lcd_lig->setGeometry(QRect(30, 0, 81, 31));
        lcd_lig->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 180, 31, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 240, 31, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 31, 21));
        btn_serial = new QPushButton(centralWidget);
        btn_serial->setObjectName(QString::fromUtf8("btn_serial"));
        btn_serial->setGeometry(QRect(400, 120, 91, 31));
        btn_serial->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 130, 61, 21));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(49, 300, 111, 31));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lcd_dis = new QLCDNumber(frame_2);
        lcd_dis->setObjectName(QString::fromUtf8("lcd_dis"));
        lcd_dis->setGeometry(QRect(40, 0, 71, 31));
        lcd_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 107);\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 300, 31, 21));
        lcd_smok = new QLCDNumber(centralWidget);
        lcd_smok->setObjectName(QString::fromUtf8("lcd_smok"));
        lcd_smok->setGeometry(QRect(90, 350, 71, 31));
        lcd_smok->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 350, 81, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 360, 121, 31));
        ring = new QLCDNumber(centralWidget);
        ring->setObjectName(QString::fromUtf8("ring"));
        ring->setGeometry(QRect(90, 410, 71, 31));
        ring->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 410, 61, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 360, 92, 27));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(490, 430, 71, 21));
        id_judge = new QLCDNumber(centralWidget);
        id_judge->setObjectName(QString::fromUtf8("id_judge"));
        id_judge->setGeometry(QRect(560, 420, 91, 31));
        id_judge->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(570, 160, 111, 181));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 733, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        motor_for_click->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\346\255\243\350\275\254", 0, QApplication::UnicodeUTF8));
        motor_back_click->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\217\215\350\275\254", 0, QApplication::UnicodeUTF8));
        motor_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        btn_serial->setText(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\345\274\200\345\205\263", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\350\267\235\347\246\273", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\347\203\237\351\233\276\346\212\245\350\255\246\345\231\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\357\274\2100\350\241\250\347\244\272\345\256\211\345\205\250\347\212\266\346\200\201\357\274\211", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\347\272\242\345\244\226\346\212\245\350\255\246", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\351\227\250", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\206\345\210\253", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\350\200\201\344\272\272\345\261\205\345\256\266\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
