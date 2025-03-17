#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1);
  }
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Map accelerometer values to motor control commands
  if (ay > 5000) {
    Serial.write('F'); // Forward
  } else if (ay < -5000) {
    Serial.write('B'); // Backward
  } else if (ax > 5000) {
    Serial.write('L'); // Left
  } else if (ax < -5000) {
    Serial.write('R'); // Right
  } else {
    Serial.write('S'); // Stop
  }

  delay(100); // Adjust delay for responsiveness
}
