# arduino 中 ESP32 使用两核心同时执行不同的任务

**说明：**
- 需要吧 Example.ino 文件放进同名文件夹然后双击打开，否则不符合 arduino 的项目要求，会报错
- 经过测试 arduin主循环是在核心 1 上，所以 ESP32 核心 0 是闲暇的

**参考：**
> ESP32 是双核的,包含 Protocol CPU (称为 CPU 0 或PRO_CPU)和 Application CPU (称为 CPU 1 或 APP_CPU). 这两个核实际上是相同的,并且共享相同的内存. 这允许任务在两个核之间交替运行 
- [ESP32 官方文档（九）ESP-IDF FreeRTOS SMP Changes - CSDN](https://blog.csdn.net/qq_27114397/article/details/82314286)
