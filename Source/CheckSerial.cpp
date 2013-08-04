#include <Arduino.h>
#include "CheckSerial.h"
//#include "PinsNo.h"

CheckSerialState CheckSerial(void)
{
  CheckSerialState State = Fault;
  if (Serial.available() > 0)
  {
    State = SerialAvailable;
  }
  else
  {
    State = NoData;
  }
 return State;
}
