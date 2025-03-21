//*****************************************************************************

// sensors.h - Header file for Sensor and its derived classes.

//*****************************************************************************

#ifndef SENSORS_H
#define SENSORS_H

#include <stdint.h>

// Base class Sensor
class Sensor {
protected:
    int SensorNum;      // Unique ID for the sensor
    uint8_t Value;        // Current sensor reading

public:
    Sensor(int sensorNum);
    virtual uint8_t readValue();        // Read sensor value
    void setValue(uint8_t value);       // Set the sensor value
    virtual ~Sensor() = default;        // Virtual destructor
};

// class MotionDetector
class MotionDetector : public Sensor {
public:
    MotionDetector(int sensorNum);
    uint8_t readValue();
};

// class Tempsensor
class TempSensor : public Sensor {
public:
    TempSensor(int sensorNum);
    uint8_t readValue();
};

#endif // SENSORS_H
