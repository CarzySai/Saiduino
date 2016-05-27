/*
 作者:Sai
 时间：2016年5月28日
 程序说明： 
 循环使一个Led亮一秒，灭一秒
 */
 
void setup() {                
  // 初始化数字引脚，使其为输出状态。
  // 大部分Arduino控制板上，数字13号引脚都有一颗Led。
  pinMode(13, OUTPUT);     
}
 
void loop() {
  digitalWrite(13, HIGH);   // 使Led亮
  delay(1000);              // 持续1秒钟
  digitalWrite(13, LOW);    // 使Led灭
  delay(1000);              // 持续1秒钟。
}

