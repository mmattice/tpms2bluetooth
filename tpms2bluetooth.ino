#include <Arduino.h>
#include <ArduinoLog.h>

void setup() {
    Serial.begin(115200);
    Log.begin(LOG_LEVEL, &Serial);
    delay(10000);
    Log.notice(F(" " LF));
    Log.notice(F("****** setup ******" NL));
}

void loop() {
    delay(2000);
    Log.notice(F("****** loop ******" NL));
}
