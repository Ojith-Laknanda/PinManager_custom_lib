 #include "PinManager.h"

PinManager pn;

 void setup() {
  // put your setup code here, to run once:
  pn.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  while(pn.dataRead(INPUT3)){
    pn.dataWrite(OUTPUT9, HIGH);
    delay(1000);
    pn.dataWrite(OUTPUT9,LOW);
    Serial.println("doing");
    delay(1000);
  }
}
