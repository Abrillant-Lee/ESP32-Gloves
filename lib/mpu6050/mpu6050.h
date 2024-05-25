// mpu6050.h
#ifndef _MPU6050_H_
#define _MPU6050_H_

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

extern Adafruit_MPU6050 mpu;

/*
接线：
| ESP32 | MPU6050 |
| :---: | :-----: |
|  GND  |   GND   |
| 3.3v  |   VCC   |
|  21   |   SDA   |
|  22   |   SCL   |
*/
void MPU6050_Init();
void MPU6050_Data();

#endif // _MPU6050_H_
