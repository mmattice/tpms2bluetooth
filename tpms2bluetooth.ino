#include <Arduino.h>
#include <ArduinoLog.h>

void setup() {
  Serial.begin(921600);
  Log.begin(LOG_LEVEL, &Serial);
  Log.notice(F(" " CR));
  Log.notice(F("****** setup ******" CR));
  delay(10000);
}

void loop() {
  Log.notice(F("****** loop ******" CR));
  delay(2000);
}  
