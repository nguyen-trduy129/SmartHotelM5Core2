#include "ClosedCube_TCA9548A.h"
#include "ACmeasurementRun.h"

#define PaHub_I2C_ADDRESS       0x70

extern ClosedCube::Wired::TCA9548A tca9548a;

void initPaHub();
void isACReaddy(uint8_t);
void ACRun(uint8_t);
