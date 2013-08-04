#ifndef _PinsNo_H
#define _PinsNo_H



// Def I/O pins




// Serial LCD 74LS595
  int m_dataPin   = 3;   // SR Data (14)
  int m_clockPin  = 2;   // SR Clock (11) 
  int m_EnablePin = 6;   // SR RCK (12)
  
// Blinky
  int led = 13;
  
  
enum SysState{ Init, SystemIdle, e_CheckSerial, SelectMode, SystemError };
SysState SystemState = Init;


enum ErrLvl{ None, Some, Verbose };
ErrLvl ErrorLevel = Verbose;

#endif
