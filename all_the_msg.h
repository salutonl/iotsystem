#ifndef TEMP_HUMI_LIGHT_H
#define TEMP_HUMI_LIGHT_H

#include <QObject>
#include "enddevice.h"

class All_the_msg : public EndDevice
{
public:
    explicit All_the_msg();
    void setValue(QByteArray&);
    void setValue(int, int, float);
    void setsmok(QByteArray&);
    void setsmok(int);
    void setdis(float);
    void setdis(QByteArray&);
    void setwarning(int);
    void setwarning(QByteArray&);
    void setid(int);
    void setid(QByteArray&);
    int getTemperature();
    int getHumidity();
    float getLight();
    int getsmok();
    int getdis();
    int getwarning();
    int getid();


private :
    int temperature;
    int humidity;
    float light;
    int smok;
    float dis;
    int warning;
    int id;
};

#endif // TEMP_HUMI_LIGHT_H
