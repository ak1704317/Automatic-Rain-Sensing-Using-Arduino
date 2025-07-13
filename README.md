# Automatic Rain Sensing Wiper System using Arduino


This project is an **Automatic Rain Detection and Wiper Control System** built using an Arduino board. It senses the rain intensity using a rain sensor and automatically activates a servo motor to operate a wiper. Useful for vehicles or smart window systems.

##  Features

- Detects rain using a **rain sensor** (analog output)
- Automatically moves a **servo motor** based on rain intensity
- Can be customized for cars, buses, IoT windows, or farming

##  Components Used

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| Rain Sensor Module     | 1        |
| Servo Motor (e.g., SG90)| 1        |
| Jumper Wires           | As needed |
| Breadboard (optional)  | 1        |

##  Wiring / Connections

| Rain Sensor     | Arduino      |
|-----------------|--------------|
| AO (Analog Out) | A0           |
| VCC             | 5V           |
| GND             | GND          |

| Servo Motor     | Arduino      |
|-----------------|--------------|
| VCC (Red)       | 5V           |
| GND (Brown/Black)| GND         |
| Signal (Orange) | D9 (example) |



##  Arduino Code Overview

The code:
- Reads analog value from the rain sensor
- Rotates servo to wipe window when rain is detected

## How to Use

1. Connect all components as per wiring
2. Upload code to Arduino using Arduino IDE
3. Power on the setup
4. Drop some water on the sensor — the servo will activate 

## Output

- Servo: Moves 0° → 180° like a wiper

##  Future Improvements

- Add buzzer for alerts
- Control real car wiper motors via relay
- Use ESP32 to send rain data to cloud

## Author

Created by **Akash Kumar**  
This is part of a learning and IoT automation project

##  License

This project is open-source. Use it freely with attribution.
