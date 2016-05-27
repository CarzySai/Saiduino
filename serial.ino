void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //设置串口波特率
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world!"); //每隔一秒打印一句Hello world
  delay(1000); 
}
