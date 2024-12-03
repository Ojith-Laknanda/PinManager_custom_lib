#include "PinManager.h"
PinManager::PinManager (){}

void PinManager::begin(){
  Serial.begin(115200);
  Serial.println("welcome Ojith");

  for(byte i=0;i<5;i++){ // why can not use unit8_t
    pinMode(inputPins[i],INPUT);
  }

  for(byte i=0;i<9;i++){
    pinMode(outputPins[i],OUTPUT);
  }

}

int PinManager::dataRead(InputPins input){
   if(input>=INPUT1 && input<= INPUT4){
    return digitalRead(inputPins[input]);
   }
   return (-1);
}

void PinManager :: dataWrite(OutputPins output , int state){ // why can not use unit8_t
  if(output>=OUTPUT1 && output<=OUTPUT9 ){
    digitalWrite(output,state); 
  }
}
