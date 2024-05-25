#include "mpu6050.h"

Adafruit_MPU6050 mpu; // 创建一个Adafruit_MPU6050对象

// 初始化MPU6050的函数
void MPU6050_Init() // 初始化MPU6050的函数
{
    while (!Serial) // 如果串行通信未开启
        delay(10);  // 延迟10毫秒

    Serial.println("Adafruit MPU6050 test!"); // 在串行监视器上打印测试信息

    // 尝试初始化MPU6050
    if (!mpu.begin()) // 如果初始化失败
    {
        Serial.println("Failed to find MPU6050 chip"); // 在串行监视器上打印错误信息
        while (1)                                      // 无限循环
        {
            delay(10); // 延迟10毫秒
        }
    }
    Serial.println("MPU6050 Found!"); // 在串行监视器上打印找到MPU6050的信息

    // 设置运动检测
    mpu.setHighPassFilter(MPU6050_HIGHPASS_0_63_HZ); // 设置高通滤波器
    mpu.setMotionDetectionThreshold(1);              // 设置运动检测阈值
    mpu.setMotionDetectionDuration(20);              // 设置运动检测持续时间
    mpu.setInterruptPinLatch(true);                  // 设置中断引脚锁存
    mpu.setInterruptPinPolarity(true);               // 设置中断引脚极性
    mpu.setMotionInterrupt(true);                    // 设置运动中断

    Serial.println(""); // 在串行监视器上打印空行
    delay(100);         // 延迟100毫秒
}

// 获取MPU6050数据的函数
void MPU6050_Data()
{

    if (mpu.getMotionInterruptStatus()) // 如果检测到运动中断
    {
        /* 获取新的传感器事件和读数 */
        sensors_event_t a, g, temp;  // 创建传感器事件对象
        mpu.getEvent(&a, &g, &temp); // 获取事件和读数

        /* 打印出值 */
        Serial.print("AccelX:"); // 打印加速度X轴的值
        Serial.print(a.acceleration.x);
        Serial.print(",");
        Serial.print("AccelY:"); // 打印加速度Y轴的值
        Serial.print(a.acceleration.y);
        Serial.print(",");
        Serial.print("AccelZ:"); // 打印加速度Z轴的值
        Serial.print(a.acceleration.z);
        Serial.print(", ");
        Serial.print("GyroX:"); // 打印陀螺仪X轴的值
        Serial.print(g.gyro.x);
        Serial.print(",");
        Serial.print("GyroY:"); // 打印陀螺仪Y轴的值
        Serial.print(g.gyro.y);
        Serial.print(",");
        Serial.print("GyroZ:"); // 打印陀螺仪Z轴的值
        Serial.print(g.gyro.z);
        Serial.println(""); // 打印空行
    }

    delay(10); // 延迟10毫秒
}