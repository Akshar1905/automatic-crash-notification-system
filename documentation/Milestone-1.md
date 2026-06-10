# Milestone 1 - Wokwi Setup and Crash Detection Prototype

**Date:** 10 June 2026

## Objective

Build and validate the first virtual prototype of the Automatic Crash Notification System before purchasing hardware components.

## Components Used

* ESP32 DevKit V1 (Wokwi)
* MPU6050 Accelerometer and Gyroscope Sensor

## Activities Completed

* Created a new ESP32 project in Wokwi.
* Added MPU6050 sensor.
* Connected MPU6050 to ESP32 using I2C communication.
* Installed required libraries.
* Successfully read accelerometer values from the sensor.
* Implemented basic crash detection logic using acceleration thresholds.
* Created a GitHub repository for project version control.
* Added screenshots and source code to the repository.
* Created a .gitignore file and removed unnecessary system files.

## Wiring Connections

| MPU6050 | ESP32  |
| ------- | ------ |
| VCC     | 3V3    |
| GND     | GND    |
| SDA     | GPIO21 |
| SCL     | GPIO22 |

## Results

* Sensor communication was successful.
* Real-time acceleration data was displayed in the Serial Monitor.
* Crash detection logic was tested successfully in simulation.

## Challenges Faced

* Understanding ESP32 GPIO pins.
* Learning Wokwi interface.
* Setting up Git and GitHub.
* Resolving GitHub authentication issues.

## Learnings

* Basics of ESP32 development.
* I2C communication.
* MPU6050 sensor integration.
* Git and GitHub workflow.
* Wokwi simulation environment.

## Repository

GitHub Repository:
https://github.com/Akshar1905/automatic-crash-notification-system

## Next Milestone

GPS Integration in Wokwi

Goal:

Crash Detection → GPS Location Retrieval → Emergency Alert Preparation
