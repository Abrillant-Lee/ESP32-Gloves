#ifndef _FLEX_H_
#define _FLEX_H_


#include "Arduino.h"

// 获取弯曲角度的函数
/* 接线
| ESP32 | 弯曲传感器  |
| :---: | :--------: |
|  GND  |    GND     |
| 3.3v  |    VCC     |
|  21   |            |
|  22   |            |
|  32   | Flex1_ADC  |
|  33   | Flex2_ADC  |
|  34   | Flex3_ADC  |
|  35   | Flex4_ADC  |
|  36   | Flex5_ADC  |
*/
int getBendAngle(int sensorPin);

#endif // !_FLEX_H_
