//***********************************************************************************

// rooms.h - Header files for Room and its derived classes (Livingroom and Bedroom).

//***********************************************************************************

#ifndef ROOMS_H
#define ROOMS_H

#include "devices.h"
#include "sensors.h"

// Base class Room
class Room {
protected:
    int RoomNum;       // Unique ID for the room

    // A room has the following devices and sensors
    MotionDetector* motionDetector;
    TempSensor* tempSensor;
    Light* light;
    AC* ac;
    Heater* heater;

public:
    Room(int roomNum);
    virtual ~Room();         // Virtual destructor for proper cleanup
    virtual void describe() const;      // describe the room

    // Public methods to access devices and sensors
    MotionDetector* getMotionDetector() const { return motionDetector; }
    TempSensor* getTempSensor() const { return tempSensor; }
    Light* getLight() const { return light; }
    AC* getAC() const { return ac; }
    Heater* getHeater() const { return heater; }

    // Methods to access devices
    void turnOnAC();                    // Turn on the AC
    void turnOffAC();                   // Turn off the AC
    void turnOnLight();
    void turnOffLight();
    void turnOnHeater();
    void turnOffHeater();
};

// LivingRoom class
class LivingRoom : public Room {
public:
    LivingRoom(int roomNum);
    void describe() const;              // Override describe function
};

// BedRoom class
class BedRoom : public Room {
public:
    BedRoom(int roomNum);
    void describe() const;              // Override describe function
};

#endif // ROOMS_H
