//***********************************************************************************

// wrapper.cpp -

//***********************************************************************************

#include "wrapper.h"
#include "rooms.h"
#include "sensors.h"
#include "devices.h"
#include <cstddef>
#include <cstdlib>
#include <stdlib.h>
#include <new>

// Create a LivingRoom instance
void* createLivingRoom(int roomNum) {
    return new LivingRoom(roomNum);
}

// Create a BedRoom instance
void* createBedRoom(int roomNum) {
    return new BedRoom(roomNum);
}

// Destroy Room instances
void destroyRoom(void* room) {
    delete static_cast<Room*>(room);
}

// Describe the Room
void describeRoom(void* room) {
    if (!room) return;  // Check if the pointer is NULL
    static_cast<Room*>(room)->describe();
}

// Set MotionDetector value
void setMotionDetectorValue(void* room, uint8_t value) {
    if (!room) return;  // return if room is NULL
    static_cast<Room*>(room)->getMotionDetector()->setValue(value);
}

// Get MotionDetector value
uint8_t getMotionDetectorValue(void* room) {
    return static_cast<Room*>(room)->getMotionDetector()->readValue();
}

// Set TempSensor value
void setTempSensorValue(void* room, uint8_t value) {
    static_cast<Room*>(room)->getTempSensor()->setValue(value);
}

// Get TempSensor value
uint8_t getTempSensorValue(void* room) {
    return static_cast<Room*>(room)->getTempSensor()->readValue();
}

// Control Light
void turnOnLight(void* room) {
    static_cast<Room*>(room)->turnOnLight();
}

void turnOffLight(void* room) {
    static_cast<Room*>(room)->turnOffLight();
}

int isLightOn(void* room) {
    return static_cast<Room*>(room)->getLight()->getState();
}

// Control AC
void turnOnAC(void* room) {
    static_cast<Room*>(room)->turnOnAC();
}

void turnOffAC(void* room) {
    static_cast<Room*>(room)->turnOffAC();
}

int isACOn(void* room) {
    return static_cast<Room*>(room)->getAC()->getState();
}

// Control Heater
void turnOnHeater(void* room) {
    static_cast<Room*>(room)->turnOnHeater();
}

void turnOffHeater(void* room) {
    static_cast<Room*>(room)->turnOffHeater();
}

int isHeaterOn(void* room) {
    return static_cast<Room*>(room)->getHeater()->getState();
}

