#include <Arduino.h>
#include "ErrorHandler.h"

void Error::ReportError(int SystemState, char* ErrorMsg, int ErrSeverity)
{
}  

void Error::FlashLED(void){}
void Error::ReportErrorSerial(char* ErrorMsg){}
void Error::ReportErrorLCD(char* ErrorMsg){}
    //etc
