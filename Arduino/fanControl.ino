#define  LED_BUILTIN  13             //宏定义LED引脚，便于识记
#define  OFF_LED  LOW           //宏定义高电平时为关闭LED灯
#define  ON_LED   HIGH            //宏定义低电平时为打开LED灯
//char uart_rx_buf = 0;            //声明一个char类型变量，用于存储串口接收到的字符
char input = 0;//定义serail的输入
char fan;              //定义风扇转速
void setup(){                    //初始化   
    //put your setup code here, to run once:                    
    pinMode(LED_BUILTIN,OUTPUT);     //初始化LED引脚为输出模式
    Serial.begin(9600);       //初始化串口波特率为115200
    digitalWrite(LED_BUILTIN,OFF_LED);//初始状态LED熄灭
}

void loop(){                     //主循环,实现串口控制LED的亮灭

    //put your main code here, to run repeatedly:
    while(Serial.available()) {  //如果串口有数据

//       digitalWrite(LED_BUILTIN, HIGH);
//       delay(10);
       
       fan = Serial.read();//Serial.read()读缓冲区字符，每次只能读一个字节     
       Serial.println(fan);
       
        if(fan == '1') {
       
           digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
           delay(500);                       // wait for a second
          
        }
        else if(fan == '0') {
//        else {
           digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
           delay(500);     
            
        } 
      fan = 0;            //清除接收到的字符
     }
}
