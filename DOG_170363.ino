#include <avr/wdt.h>

void setup()
{
  Serial.begin(9600);
  wdt_enable(WDTO_2S);// สั่งให้เริ่มจับเวลา 2 วินาที ถ้าเกินให้ Reset โปรแกรมใหม่
  Serial.println("Reset");
}
void loop()
{
  //wdt_disable();
  Serial.println("Arduino All Working...");
  delay(3000);// หน่วงเวลา 3000ms
  wdt_reset(); //สั่งให้ wdt reset เริ่มจับเวลาใหม่
}
