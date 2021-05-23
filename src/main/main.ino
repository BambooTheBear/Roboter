#include "Motor.hpp" 
#include "Def.hpp"

void setup()
{
  delay(2000);

  setupMotor();

  #ifdef debug
  Serial.begin(9600);
  Serial.write("Setup finished\n");
  #endif
}

void loop()
{
  drive(forward, 500, 200);
}
