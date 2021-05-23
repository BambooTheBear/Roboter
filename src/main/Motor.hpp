#ifndef MotorHpp
#define MotorHpp

#define forward false
#define backward true
#define left true
#define right false
#define lDir 3
#define rDir 5
#define lStep 2
#define rStep 4
#define mSleep 6

void setupMotor();
void drive(bool dir, int Speed, int distance);
void turn(bool side, int Speed, int distance);

#endif
