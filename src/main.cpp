#include "mqtt.h"    // 引入mqtt头文件
#include "flex.h"    // 引入flex头文件
#include "mpu6050.h" // 引入mpu6050头文件

extern PubSubClient client; // 声明外部的PubSubClient对象

void setup() // 设置函数，在程序开始时运行一次
{
    initMQTTClient();                          // 初始化MQTT客户端
    MPU6050_Init();                            // 初始化MPU6050
}

void loop() // 循环函数，程序开始后反复运行
{
    sensors_event_t a, g, temp;  // 创建传感器事件对象
    mpu.getEvent(&a, &g, &temp);  // 获取事件和读数
    // 弯曲角度 、6周陀螺仪的数据
    const char *properties[] = {"Angle:", "AccelX:", "AccelY:", "AccelZ:", "GyroX:", "GyroY:", "GyroZ:"};  // 创建属性数组
    int values[] = {getBendAngle(32), a.acceleration.x, a.acceleration.y, a.acceleration.z, g.gyro.x, g.gyro.y, g.gyro.z};  // 创建值数组

    reportDeviceValues("esp32", properties, values, sizeof(values) / sizeof(values[0]));  // 报告设备值
    delay(1000); // 延迟1000毫秒
}