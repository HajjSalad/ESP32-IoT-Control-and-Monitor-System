//*****************************************************************************

// devices.h - Header file for Device and its derived classes.

//*****************************************************************************

#ifndef DEVICES_H
#define DEVICES_H

// Base class Devices
class Device {
protected:
    int DeviceNum;        // Unique ID for a device
    bool State;           // On or Off

public:
    Device(int deviceNum);
    virtual void turnOn();
    virtual void turnOff();
    bool getState() const;
    virtual ~Device() = default;        // Virtual destructor
};

// Light class
class Light : public Device {
public:
    Light(int deviceNum);
};

// AC class
class AC : public Device {
public:
    AC(int deviceNum);
};

// Heater class
class Heater : public Device {
public:
    Heater(int deviceNum);
};

#endif // DEVICES_H
