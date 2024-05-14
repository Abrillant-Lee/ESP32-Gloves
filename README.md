<p align="center"><a href=""><img src="./img/水晶标.png" alt="1Panel" width="300" /></a></p>
<p align="center">
  <b>心中有火，眼中有光，系万物于 鸿蒙，联数据辅众生——Maker-IoT，改变世界的开发者<br>
  本开源仓库是一款基于ESP32的智能手部数据采集手套，结合弯曲传感器和MPU6050惯性单元，实现对手部动作的精确捕捉与分析。</b><br><br>
  <a href="https://www.gnu.org/licenses/gpl-3.0.html"><img src="https://shields.io/github/license/1Panel-dev/1Panel?color=%231890FF" alt="License: GPL v3"></a>
  <a href="https://github.com/Abrillant-Lee/ESP32-Gloves"><img src="https://img.shields.io/github/stars/1Panel-dev/1Panel?color=%231890FF&style=flat-square" alt="Stars"></a>
  <a href="https://space.bilibili.com/519646621"><img src="https://img.shields.io/badge/-Bilibili-FF69B4?style=plastic&logo=bilibili&logoColor=white" alt="Bilibili"></a>
  <a href="https://www.douyin.com/user/MS4wLjABAAAAQibyq20SOLrk5Lk67ktTQZb3-kztJ3k_cC8_eVi1FOA"><img src="https://img.shields.io/badge/-Douyin-000000?style=plastic&logo=tiktok&logoColor=white" alt="Douyin"></a>
  <a href="https://mp.weixin.qq.com/s/_FfzsiK6Bpmyho9xrrCHAw"><img src="https://img.shields.io/badge/-WeChat-7BB32E?style=plastic&logo=wechat&logoColor=white" alt="WeChat"></a><br>
  <a href="docs/README_TW.md">中文(简体)</a> |  
  <a href="docs/README_EN.md">English</a> | 
  <a href="docs/README_TW.md">中文(繁體)</a> 
</p>

------------------------------


## 目录

[1、Arduino IDE开发环境搭建](./doc/arduino_env.md)

##  硬件
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

