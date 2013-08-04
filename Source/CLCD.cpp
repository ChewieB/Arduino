#include <ShiftRegLCD.h>
#include <Arduino.h>
#include "CLCD.h"
// Trying to hide the ShiftRegLCD slass failed so now it is global :+(
// The LCD Class creator now only specifies the display size.
CLCD::CLCD()
{
}

void CLCD::Clear(ShiftRegLCD theLCD)
{
 theLCD.clear();
 //LCDDisplay.clear();
}
void CLCD::Write(ShiftRegLCD theLCD, char* Message)
{
  theLCD.print(Message);
}  
void CLCD::MoveXY(int Column, int Row)
{
  //LCDDisplay.setCursor(Column - 1, Row - 1);
}

void CLCD::Display(char* LCDMessage)
{
  //ping
}

