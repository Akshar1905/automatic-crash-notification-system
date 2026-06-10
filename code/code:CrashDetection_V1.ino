#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);

  if (!mpu.begin()) {
    Serial.println("MPU6050 not found!");
    while (1) {
      delay(10);
    }
  }

  Serial.println("MPU6050 Found!");
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  float totalAccel = sqrt(
    a.acceleration.x * a.acceleration.x +
    a.acceleration.y * a.acceleration.y +
    a.acceleration.z * a.acceleration.z
  );

  Serial.print("Total Acceleration: ");
  Serial.println(totalAccel);

  if (totalAccel > 20) {
    Serial.println("🚨 CRASH DETECTED! 🚨");
  }

  delay(500);
}