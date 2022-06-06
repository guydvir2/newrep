#include <Arduino.h>
#include <ABCD.h>

firstLib fLIB;

void setup()
{
    Serial.begin(115200);
    fLIB.printME();
}
void loop()
{
    Serial.println("LOOOOOP");
    delay(1000);
}
