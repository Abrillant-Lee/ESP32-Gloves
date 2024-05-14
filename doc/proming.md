#  硬件
1. 开发板：ESP32
2. 传感器：弯曲传感器、MPU6050
3. 电源：锂电池

接线：
| ESP32 | 弯曲传感器 | MPU6050 |
| :---: | :--------: | :-----: |
|  GND  |    GND     |   GND   |
| 3.3v  |    VCC     |   VCC   |
|  21   |            |   SDA   |
|  22   |            |   SCL   |
|  32   | Flex1_ADC  |         |
|  33   | Flex2_ADC  |         |
|  34   | Flex3_ADC  |         |
|  35   | Flex4_ADC  |         |
|  36   | Flex5_ADC  |         |

