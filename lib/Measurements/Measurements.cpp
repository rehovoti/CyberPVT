#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Measurements.h>

// OneWire tSurfaceWire(T_SURFACE_PIN);
// DallasTemperature tSurfaceSensor(&tSurfaceWire);
//===================================================
// DS18B20 tWaterIn(T_WATER_IN);
// DS18B20 tWaterOut(T_WATER_OUT);

float temp[3];

void initMeasurements() {
}

void printTemp() {
  Serial.print("T(Surface): ");
  Serial.println(temp[0]);
  // Serial.print("T(Water In): ");
  // Serial.println(temp[1]);
  // Serial.print("T(Water Out): ");
  // Serial.println(temp[2]);
}

void measurementsTask(void* parameters) {
    // tSurfaceSensor.requestTemperatures();
    // vTaskDelay(750 / portTICK_PERIOD_MS);

    // temp[0] = tSurfaceSensor.getTempCByIndex(0);
    // // temp[1] = tWaterIn.ge mpC();
    printTemp();
  vTaskDelay(5000 / portTICK_PERIOD_MS);
}