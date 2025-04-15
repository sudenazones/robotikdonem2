
#include "TM1637.h"
const int CLK=8;
const int DIO=7;
TM1637 tm1637(CLK,DIO);

void setup() {

 tm1637.init();
 tm1637.set(BRIGHT_TYPICAL);

}

void loop() {
 tm1637.displayStr("damla");
 delay(1000);
 for (int i=2;i>0;i=i-1){
  tm1637.displayNum(i);
  delay(1000);
 }
tm1637.displayStr("sude");
 delay(1000);
 for (int i=2;i>0;i=i-1){
  tm1637.displayNum(i);
  delay(1000);
}
}
