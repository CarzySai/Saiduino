/*
 作者:Sai
 时间：2016年5月28日
 程序说明： 
 使用2-7号管脚，循环逐个点亮
 */
void setup()
{
  for (int i=2; i<=7; i++)    //通过循环的方式设置2-7号引脚为输出状态
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for(int x=2; x<=7; x++)   //通过循环的方式依次让每个引脚的led在点亮
  {
    digitalWrite(x,HIGH);
  }
  delay(500);                 //同时点亮等待0.5秒

  for(int x=2; x<=7; x++)              //循环方式让led熄灭
  {
    digitalWrite(x,LOW);
  }
    delay(500);                     //让他们熄灭0.5秒
}

