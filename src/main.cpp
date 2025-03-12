#include <Arduino.h>
#include <Pump.h>

int count1 = 0;

void task1(void* parameters) {
  for(;;) {
    Serial.print("Task 1 counter: ");
    Serial.println(count1++);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void setup() {

  Serial.begin(9600);
  initPump();

  xTaskCreate(
    task1, // func for the task
    "Task 1", // description
    1000, // stack size
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
