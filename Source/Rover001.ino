// Stage 1 LED and Shift reg LCD trial
// No state M/C, motors or other stuff But piggy backed on the Adafruit
// motor shield.

#include <ShiftRegLCD.h>
#include "CLED.h"
#include "CLCD.h"
#include "PinsNo.h"
#include "CheckSerial.h"

ShiftRegLCD LCDDisplay(m_dataPin, m_clockPin, m_EnablePin, m_MaxY);
CLED MyLED;
CLCD MyLCDDisplay;

void setup()
{
  pinMode(led, OUTPUT); 
  pinMode(m_dataPin, OUTPUT);
  pinMode(m_clockPin, OUTPUT);
  pinMode(m_EnablePin, OUTPUT);

  Serial.begin(9600);
  MyLCDDisplay.Clear(LCDDisplay);
  MyLCDDisplay.Write(LCDDisplay, "Initialisation");
  delay(1000);
  MyLCDDisplay.Clear(LCDDisplay);
  SystemState = Init;
}

void loop()
{
  switch( SystemState )
  {  
    case Init:
      Serial.println("Thunderbirds are GO !");
      SystemState = SystemIdle;
      break;
      
    case SystemIdle:
      delay(1000);
      SystemState = e_CheckSerial;
      break;
    
    case e_CheckSerial:
      if ( ErrorLevel == Verbose )
      {
        MyLCDDisplay.Clear(LCDDisplay);
        MyLCDDisplay.Write(LCDDisplay, "PooPoo");
      }
      SystemState = SystemIdle;
      break;
      
    default:
      Serial.println("Main Loop Default trap !");
      SystemState = SystemIdle;
      break;
  }
}
