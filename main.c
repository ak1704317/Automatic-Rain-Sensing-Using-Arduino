#include <Servo.h>

Servo wiperServo;

const int rainSensorPin = A0;  // Rain sensor analog pin
int rainValue = 0;

void setup() {
  wiperServo.attach(9);        // Servo control pin D9
  wiperServo.write(0);         // Start at 0°
  Serial.begin(9600);          // For monitoring (optional)
}

void loop() {
  rainValue = analogRead(rainSensorPin);
  Serial.print("Rain Intensity Value: ");
  Serial.println(rainValue);

  // Determine rain level and adjust wiper speed
  if (rainValue > 800) {
    // No rain
    wiperServo.write(0);
  }
  else if (rainValue > 600) {
    // Light rain: slow wipe
    wiperSweep(100);
  }
  else if (rainValue > 400) {
    // Medium rain: medium speed
    wiperSweep(60);
  }
  else {
    // Heavy rain: fast speed
    wiperSweep(30);
  }

  delay(100);  // Delay between sensor readings
}

// Simulate one back-and-forth wipe
void wiperSweep(int delayTime) {
  for (int pos = 0; pos <= 180; pos += 5) {
    wiperServo.write(pos);
    delay(delayTime);
  }
  for (int pos = 180; pos >= 0; pos -= 5) {
    wiperServo.write(pos);
    delay(delayTime);
  }
}