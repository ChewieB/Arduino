#ifndef _CheckSerial_H
#define _CheckSerial_H
//#include "PinsNo.h"


enum CheckSerialState{ Fault, SerialAvailable, NoData };

CheckSerialState CheckSerial(void);

#endif
