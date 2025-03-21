//*****************************************************************************

// devices.cpp - Base class Device and its derived classes(Light, AC, Heater).

//*****************************************************************************

#include "devices.h"

// Device class implementation
Device::Device(int deviceNum) : DeviceNum(deviceNum), State(false) {}

void Device::turnOn() {
    State = true;
}

void Device::turnOff() {
    State = false;
}

bool Device::getState() const {
    return State;
}

// Light class implementation
Light::Light(int deviceNum) : Device(deviceNum) {}

// AC class implementation
AC::AC(int deviceNum) : Device(deviceNum) {}

// Heater class implementation
Heater::Heater(int deviceNum) : Device(deviceNum) {}
