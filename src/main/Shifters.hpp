#define forward true
#define backward false
#define left true
#define right false
#define lDir   3             // Edit
#define rDir   3
#define lStep  3
#define rStep  3
#define mSleep 3             // until here
#define debug

void setupMotors();
void drive(bool direction, int speed, int distance);
void turn(bool side, int speed, int distance);