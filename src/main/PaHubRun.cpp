#include "PaHubRun.h"

ClosedCube::Wired::TCA9548A tca9548a;

void initPaHub(){
  Wire.begin();
  tca9548a.address(PaHub_I2C_ADDRESS);
}

void isACReaddy(uint8_t channel){
  tca9548a.selectChannel(channel);
  isACmeasurementReady();
}

void ACRun(uint8_t channel){
  tca9548a.selectChannel(channel);
  ACmeasurementRun();
}