#ifndef _ErrorHandler_H
#define _ErrorHandler_H

class Error{
  public:
    void ReportError(int SystemState, char* ErrorMsg, int ErrSeverity);
  private:
    void FlashLED(void);
    void ReportErrorSerial(char* ErrorMsg);
    void ReportErrorLCD(char* ErrorMsg);
    //etc
};

#endif
