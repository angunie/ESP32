# 使用 ESP32 两核同时执行不同的任务

**说明：**
- 经过测试，arduin 主循环是在核 1 上，所以 ESP32 核 0 是闲暇的

**参考：**
> ESP32 是双核的,包含 Protocol CPU (称为 CPU 0 或PRO_CPU)和 Application CPU (称为 CPU 1 或 APP_CPU). 这两个核实际上是相同的,并且共享相同的内存. 这允许任务在两个核之间交替运行 
- [ESP32 官方文档（九）ESP-IDF FreeRTOS SMP Changes - CSDN](https://blog.csdn.net/qq_27114397/article/details/82314286)
