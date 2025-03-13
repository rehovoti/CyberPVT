#include <Arduino.h>
#include "Measurements.h"
#include <DS18B20.h>

DS18B20 ds18b20(ONE_WIRE_BUS);

void initMeasurements() {
}

void measurementsTask(void* parameters) {
  if (ds18b20.selectNext()) {
    float tempC = ds18b20.getTempC();
    Serial.println(tempC);
  }
  vTaskDelay(1000 / portTICK_PERIOD_MS);
}