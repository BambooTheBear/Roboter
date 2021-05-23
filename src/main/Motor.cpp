#include "Motor.hpp"
#include "Def.hpp"
#include <Arduino.h>

void setupMotor()
{
  pinMode(lStep, OUTPUT);
  pinMode(rStep, OUTPUT);
  pinMode(lDir, OUTPUT);
  pinMode(rDir, OUTPUT);
  pinMode(mSleep, OUTPUT);
  digitalWrite(mSleep, HIGH);
}

void drive(bool dir, int Speed, int distance)
{

  #ifdef debug
  Serial.write("Start driving\n");
  #endif

  if(dir)
  {
    digitalWrite(lDir, HIGH);
    digitalWrite(rDir, HIGH);
  }else{
    digitalWrite(lDir, LOW);
    digitalWrite(rDir, LOW);
  }

  for(int i = 0; i<distance; i++)
  {
    digitalWrite(lStep, HIGH);
    digitalWrite(rStep, HIGH);
    delayMicroseconds(Speed);
    digitalWrite(lStep, LOW);
    digitalWrite(rStep, LOW);
    delayMicroseconds(Speed);
  }

  #ifdef debug
  Serial.write("Stop driving\n");
  #endif
}
