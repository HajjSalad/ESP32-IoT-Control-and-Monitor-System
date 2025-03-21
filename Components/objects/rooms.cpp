//*****************************************************************************

// rooms.cpp - Base class Room and its derived classes (Livingroom, Bedroom)

//*****************************************************************************

#include "rooms.h"
#include <stdio.h>

    //**** Room class implementation ****//

// Constructor
Room::Room(int roomNum) : RoomNum(roomNum) {

    // Initialize sensors and devices for a room
    motionDetector = new MotionDetector(1);  // Unique ID for MotionDetector = 1
    tempSensor = new TempSensor(2);          // Unique ID for TempSensor = 2
    light = new Light(3);                    // Unique ID for Light = 3
    ac = new AC(4);                          // Unique ID for AC = 4
    heater = new Heater(5);                  // Unique ID for Heater = 5
}

// Destructor
Room::~Room() {
    // Clean up dynamicaaly allocated objects
    delete motionDetector;
    delete tempSensor;
    delete light;
    delete ac;
    delete heater;
}

// Describe the room
void Room::describe() const {
    printf("A room is an enclosed space within a building, "
            "designed for specific activities such as sleeping, working, or relaxing.\n");
}

// Turn on light
void Room::turnOnLight() {
    if (light) {
        light->turnOn();
    }
}
// Turn off light
void Room::turnOffLight() {
    if (light) {
        light->turnOff();
    }
}

// Turn on ac
void Room::turnOnAC() {
    if (ac) {
        ac->turnOn();
    }
}
// Turn off ac
void Room::turnOffAC() {
    if (ac) {
        ac->turnOff();
    }
}

// Turn on heater
void Room::turnOnHeater() {
    if (heater) {
        heater->turnOn();
    }
}
// turn off heater
void Room::turnOffHeater() {
    if (heater) {
        heater->turnOff();
    }
}

    //**** LivingRoom class implementation ****//

// Constructor
LivingRoom::LivingRoom(int roomNum) : Room(roomNum) {
    // Additional initialization for LivingRoom later
}

// Override describe function
void LivingRoom::describe() const {
    printf(" A living room is a space for social gatherings.\n");
}

    //**** BedRoom class implementation ****//

// Constructor
BedRoom::BedRoom(int roomNum) : Room(roomNum) {
    // Additional initialization for Bedroom later
}

// Override describe function
void BedRoom::describe() const {
    printf(" A bedroom is a private space for rest and sleep.\n");
}

