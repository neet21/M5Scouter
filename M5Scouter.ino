#include <M5StickC.h>

void setup(void) {
  M5.begin();

  //LCD Rotation settings
  M5.Lcd.setRotation(1);
  M5.Lcd.writecommand(TFT_MADCTL);
  M5.Lcd.writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_BGR);

  //Text Settings
  M5.Lcd.setTextDatum(4);
  M5.Lcd.setTextColor(TFT_WHITE,TFT_BLACK);
  M5.Lcd.setTextSize(4);
}

void loop() {
  M5.Lcd.fillScreen(TFT_BLACK);
  float test = 123.45;
  M5.Lcd.drawFloat(test, 2, 80, 40, 1);
  delay(1000);
  
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.drawString("TEST", 80, 40);
  delay(1000);
}
