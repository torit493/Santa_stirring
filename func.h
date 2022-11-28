#include <Servo.h>

// SERVOS: -----------------------------------
Servo stirrer;

// PINS: -------------------------------------
int stir = 2;

// SPEED: ------------------------------------
int stir_speed = 50; //using servo re-built for cont rot...
int stir_stop  = 87; //it stops for thiw deg write...

// TIME: -------------------------------------
double started_stirring;
double pause_time = 30000;
double stirring_time = 60000;

// BOOL: -------------------------------------
bool stirring;
