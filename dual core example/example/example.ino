static int taskCore = 0;

void coreTask( void * pvParameters ) {
  /*这是一个死循环，确保一旦执行该循环就无法抽身去执行其他任务*/
  while (true) {
    Serial.println("tow:点亮呼吸灯");
    digitalWrite(2,HIGH);
    delay(1000);
    Serial.println("tow:熄灭呼吸灯");
    digitalWrite(2,LOW);
    delay(1000);
  }
}

/*只执行一次的代码*/
void setup() {
  /*打开串口*/
  Serial.begin(115200);
  /*设置2号引脚为输出*/
  pinMode(2, OUTPUT);
  /*创建任务*/
  xTaskCreatePinnedToCore(
    coreTask,   /* 执行任务的功能 */
    "coreTask", /* 任务的名称 */
    10000,      /* 字数堆栈大小 */
    NULL,       /* 任务输入参数 */
    0,          /* 任务的优先级 */
    NULL,       /* 任务句柄 */
    taskCore);  /* 任务运行在那个核心 */
}

/*循环执行的代码*/
void loop() {
  /*这是第一次执行主循环并且死循环在这，确保不是主循环闲暇来执行另一个任务*/
  while (true) {
    Serial.println("one:我正在忙！");
    delay(1000);
  }
}
