#include "all_the_msg.h"

All_the_msg::All_the_msg()
{
    temperature = 0;
    humidity = 0;
    light = 0;
    smok = 0;
    dis = 0;
    warning = 0;
    id = 0;
}

void All_the_msg::setValue(int temperature, int humidity, float light)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->light = light;
}
void All_the_msg::setdis(float dis)
{
    this->dis = dis;
}

void All_the_msg::setsmok(int smok)
{
    this->smok = smok;
}
void All_the_msg::setid(int id)
{
    this->id = id;
}
void All_the_msg::setid(QByteArray &byte)
{
    id = byte[5];
}

void All_the_msg::setValue(QByteArray& byte)
{
    unsigned char adc_value[2];
    temperature = (byte[5] << 8) + byte[6];
    humidity = (byte[7] << 8) + byte[8];
    adc_value[0] = byte[10];
    adc_value[1] = byte[9];
    adc_value[0] = adc_value[0] >> 2;
    light = (adc_value[1]*256 + adc_value[0]) * 3.3 / 8192;
    light = light / 4;
    light = light * 913;
}
void All_the_msg::setsmok(QByteArray &byte)
{
    smok = byte[5];
}
void All_the_msg::setdis(QByteArray &byte)
{
    dis = byte[5]*256+byte[6];
}
void All_the_msg::setwarning(int warning)
{
    this->warning = warning;
}
void All_the_msg::setwarning(QByteArray &byte)
{
    warning = byte[5];
}

int All_the_msg::getsmok()
{
    return smok;
}

int All_the_msg::getdis()
{
    return dis;
}

int All_the_msg::getTemperature()
{

    return temperature;
}

int All_the_msg::getHumidity()
{
    return humidity;
}

float All_the_msg::getLight()
{
    return light;
}
int All_the_msg::getwarning()
{
    return warning;
}
int All_the_msg::getid()
{
    return id;
}
