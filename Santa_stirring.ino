#include "func.h"


void setup() {
  stirrer.attach(stir); 
  started_stirring = millis();
  stirring = true;

  Serial.begin(9600);
}

void loop() {
//  stirrer.write(25);
//  delay(500);
//  stirrer.write(0);
//  delay(500);
  if (stirring && millis() - started_stirring > stirring_time){
    stirrer.write(stir_stop);
    stirring = false;
    Serial.println("STOP");
  }
  else if (!stirring && millis() - started_stirring > stirring_time + pause_time){
    stirrer.write(stir_speed);
    started_stirring = millis();
    stirring = true;
    Serial.println("GO");
  }
}
