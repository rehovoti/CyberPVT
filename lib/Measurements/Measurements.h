#ifndef MEASUREMENTS_H
#define MEASUREMENTS_H

#define ONE_WIRE_BUS 4 // GPIO pin connected to the DS18B20

void initMeasurements();
void measurementsTask(void* parameters);

#endif