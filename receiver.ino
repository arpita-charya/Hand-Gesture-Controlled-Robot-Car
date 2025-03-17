#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

int enA = 6;
int in1 = 7;
int in2 = 8;
int in3 = 9;
int in4 = 12;
int enB = 5;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  mySerial.begin(9600);
}

void loop() {
  if (mySerial.available()) {
    char command = mySerial.read();

    switch (command) {
      case 'F': // Forward
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        break;
      case 'B': // Backward
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        break;
      case 'L': // Left
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        break;
      case 'R': // Right
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        break;
      case 'S': // Stop
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
        break;
    }
  }
}
