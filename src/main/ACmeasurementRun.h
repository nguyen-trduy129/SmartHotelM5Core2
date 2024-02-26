#include "UNIT_ACMEASURE.h"

#define UNIT_ACMEASURE_ADDR       0X42

extern UNIT_ACMEASURE sensor;

extern float voltage;
extern float current;
extern float power;
extern float appower;
extern float kwh;

extern uint8_t sensorStatus;

void isACmeasurementReady();
void ACmeasurementRun();