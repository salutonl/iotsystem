

QT       += core gui network

TARGET = GateWay
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    serialservice.cpp \
    enddevice.cpp \
    all_the_msg.cpp

HEADERS  += mainwindow.h \
    posix_qextserialport.h \
    qextserialbase.h \
    serialservice.h \
    enddevice.h \
    all_the_msg.h

FORMS    += mainwindow.ui
