
# Hand Gesture Controlled Robot Car

This project uses an **MPU 6050** accelerometer to control a robot car via hand gestures. The system consists of a **transmitter (NANO)** and a **receiver (UNO)**.

### Components
- Arduino NANO (Transmitter)
- Arduino UNO (Receiver)
- MPU 6050 (Accelerometer + Gyroscope)
- L298N Motor Driver
- DC Motors

### How It Works
1. The MPU 6050 detects hand gestures and sends commands to the NANO.
2. The NANO transmits the commands to the UNO via serial communication.
3. The UNO controls the motors using the L298N motor driver.

### Folder Structure
- `Transmitter/`: Code for the NANO (transmitter).
- `Receiver/`: Code for the UNO (receiver).

### Usage
1. Upload the transmitter code to the NANO.
2. Upload the receiver code to the UNO.
3. Power the system and control the robot using hand gestures.
