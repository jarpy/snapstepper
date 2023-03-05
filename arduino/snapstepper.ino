#include <Stepper.h>
const int stepsPerRevolution = 2048;
const int rpm = 6;

Stepper stepper1 = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  stepper1.setSpeed(rpm);
}

void loop() {
  if(Serial.available() > 0) {
    if(Serial.read() == 's') {
      stepper1.step(32);
    }
  }  
}
