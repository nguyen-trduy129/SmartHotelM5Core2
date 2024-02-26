// #include <M5Core2.h>
// #include <M5GFX.h>
// #include <PaHubRun.h>

// M5GFX display;
// M5Canvas canvas(&display);

// void setup() {
//   M5.begin(true, false, true);
//   M5.Lcd.begin();
//   Wire.begin();
//   tca9548a.address(0x70);
//   M5.Lcd.setTextSize(2);
//   isACReaddy(2);
//   while (!sensorStatus) {
//     isACReaddy(2);
//     M5.Lcd.clear();
//     M5.Lcd.setTextSize(3);
//     M5.Lcd.drawString("No Module!", 160, 200, 1);
//   }
// }

// void loop() {
//   M5.Lcd.clear();
//   M5.Lcd.setTextSize(2);
//   M5.Lcd.setTextColor(ORANGE);
//   M5.Lcd.drawString("Unit ACMeasure String", 10, 0);
//   M5.Lcd.setTextColor(ORANGE);
//   M5.Lcd.drawFastHLine(10, 30, 300, WHITE);
//   if (sensorStatus) {
//     ACRun(2);
//     M5.Lcd.setTextColor(YELLOW);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.setCursor(10, 40);
//     M5.Lcd.printf("Voltage:");
//     M5.Lcd.setTextSize(3);
//     M5.Lcd.printf("%.2fV", voltage);
//     M5.Lcd.setTextColor(GREEN);
    
//     M5.Lcd.setCursor(10, 80);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.printf("Current:");
//     M5.Lcd.setTextSize(3);
//     M5.Lcd.printf("%.2fA", (float)(sensor.getCurrent()) / 100.0);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.setTextColor(YELLOW);
    
//     M5.Lcd.setCursor(10, 120);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.printf("Power:");
//     M5.Lcd.setTextSize(3);
//     M5.Lcd.printf("%.2fW", (float)(sensor.getPower()) / 100.0);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.setTextColor(GREEN);
    
//     M5.Lcd.setCursor(10, 160);
//     M5.Lcd.setTextSize(2);
//     M5.Lcd.printf("Power Factor:");
//     M5.Lcd.setTextSize(3);
//     M5.Lcd.printf("%.2f", (float)(sensor.getPowerFactor()) / 100.0);
//     M5.Lcd.setTextSize(2);
//   } else {
//     M5.Lcd.setTextColor(RED);
//     M5.Lcd.drawString("Data not good", 10, 40);
//   }

// }