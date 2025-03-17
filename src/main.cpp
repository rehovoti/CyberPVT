#include <Arduino.h>
#include <Pump.h>
#include <Measurements.h>

void setup() {

  Serial.begin(9600);
  initPump();
  initMeasurements();

  xTaskCreate(
    measurementsTask, // func for the task
    "Measurements", // description
    2048, // stack size
    NULL, //task parameters
    1, // task priority
    NULL // task handle
  );

  xTaskCreate(
    pumpTask, // func for the task
    "Pump", // description
    1000, // stack size
    NULL, //task parameters
    1, // task priority
    NULL // task handle
  );

}

void loop() {
  
}
