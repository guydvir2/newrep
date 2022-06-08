#ifndef first_LIB_h
#define first_LIB_h

#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <MQTT.h>

class firstLib
{
public:
    int x = 10;

private:
    int _y = 11;

public:
    firstLib();
    void printME();
};

#endif