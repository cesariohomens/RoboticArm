#include <ESP32Servo.h>
#include "servos.h"

int delayTime = 1000;

Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setupServos() {
  // Initialize servo objects and attach to specific pins
  servo1.attach(13);  // MG996R
  servo2.attach(12);  // MG996R
  servo3.attach(14); // MG996R
  servo4.attach(27); // SG90
  servo5.attach(26); // SG90
  servo6.attach(25); // SG90
  
  // Set all servos to middle position (90 degrees)
  servo1.write(90);
  delay(delayTime);
  servo2.write(90);
  delay(delayTime);
  servo3.write(90);
  delay(delayTime);
  servo4.write(90);
  delay(delayTime);
  servo5.write(90);
  delay(delayTime);
  servo6.write(90);
}

// Function to rotate servo by ID and angle
void rotateServoByID(int servoID, int direction) {
  Servo *servo;
  switch (servoID) {
    case 1: servo = &servo1; break;
    case 2: servo = &servo2; break;
    case 3: servo = &servo3; break;
    case 4: servo = &servo4; break;
    case 5: servo = &servo5; break;
    case 6: servo = &servo6; break;
    default: return; // ID inválido
  }
  
  int position = servo->read() + direction;
  position = max(0, min(position, 180)); // Ensures position is within limits
  servo->write(position);
}
