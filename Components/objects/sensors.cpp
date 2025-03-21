//**************************************************************************************

// sensors.cpp - Base class Sensor and its derived classes (MotionDetector, TempSensor).

//**************************************************************************************

#include "sensors.h"

// Sensor class implementation
Sensor::Sensor(int sensorNum) : SensorNum(sensorNum), Value(0.0f) {}

uint8_t Sensor::readValue() {
    return Value; // Default implementation
}

void Sensor::setValue(uint8_t value) {
    Value = value; // Set the sensor value
}

// MotionDetector class implementation
MotionDetector::MotionDetector(int sensorNum) : Sensor(sensorNum) {}

uint8_t MotionDetector::readValue() {
    // Simulate motion detection (1 for motion, 0 for no motion)
    return Value; // Replace with actual logic
}

// TempSensor class implementation
TempSensor::TempSensor(int sensorNum) : Sensor(sensorNum) {}

uint8_t TempSensor::readValue() {
    // Simulate temp reading
    return Value; // Replace with actual logic
}
