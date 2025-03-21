//***********************************************************************************

// wrapper.h -

//***********************************************************************************

#ifndef WRAPPER_H
#define WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// Room creation and destruction
void* createLivingRoom(int roomNum);
void* createBedRoom(int roomNum);
void destroyRoom(void* room);
void describeRoom(void* room);

// Sensor functions
uint8_t getMotionDetectorValue(void* room);
void setMotionDetectorValue(void* room, uint8_t value);

uint8_t getTempSensorValue(void* room);
void setTempSensorValue(void* room, uint8_t value);

// Device control
void turnOnLight(void* room);
void turnOffLight(void* room);
int isLightOn(void* room);

void turnOnAC(void* room);
void turnOffAC(void* room);
int isACOn(void* room);

void turnOnHeater(void* room);
void turnOffHeater(void* room);
int isHeaterOn(void* room);

#ifdef __cplusplus
}
#endif

#endif // WRAPPER_H
