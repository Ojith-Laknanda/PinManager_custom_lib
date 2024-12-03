#ifndef PinManager_h
#define PinManager_h
#include <Arduino.h>

enum InputPins{
  INPUT1,
  INPUT2,
  INPUT3,
  INPUT4
};

enum OutputPins{
  OUTPUT1,
  OUTPUT2,
  OUTPUT3,
  OUTPUT4,
  OUTPUT5,
  OUTPUT6,
  OUTPUT7,
  OUTPUT8,
  OUTPUT9
};


class PinManager{
   
  public:
    PinManager();
    void begin();
    int dataRead(InputPins input);
    void dataWrite(OutputPins output , int state);
  
  private:
    const uint8_t inputPins[5]={0,1,2,3,4};
    const uint8_t outputPins[9]={5,6,7,8,9,10,11,12,13};

};

#endif