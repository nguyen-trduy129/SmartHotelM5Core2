#include "ACmeasurementRun.h"

UNIT_ACMEASURE sensor;

float voltage = 0;
float current = 0;
float power = 0;
float appower = 0;
float kwh = 0;

uint8_t sensorStatus = 0;

void isACmeasurementReady(){
  if (!(sensor.begin(&Wire, UNIT_ACMEASURE_ADDR, 32, 33, 100000UL))){
    sensorStatus = 0;
  }
  sensorStatus = 1;
}

void ACmeasurementRun(){
  voltage = (float)(sensor.getVoltage()) / 100.0; //V
  current = (float)(sensor.getCurrent()) * 10; //mA
  power = (float)(sensor.getPower()) / 100.0; //W
  appower = (float)(sensor.getApparentPower()) / 100.0; //VA
  kwh = (float)(sensor.getKWH()) /100.0; //kW.h
}