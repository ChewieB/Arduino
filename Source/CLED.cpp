#include <Arduino.h>
#include "CLED.h"

CLED::CLED()
{
}

void CLED::LEDOn(int PinNum)
{
  digitalWrite(PinNum, HIGH);
}

void CLED::LEDOff(int PinNum)
{
  digitalWrite(PinNum, LOW);  
}
