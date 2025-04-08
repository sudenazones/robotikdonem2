#include "TM1637.h"
const int CLK=6;
const int DIO=7;
TM1637 tm1637(CLK,DIO);


void setup() {
 tm1637.init();
 tm1637.set(BRIGHT_TYPICAL);
 float num = 2009;
 tm1637.displayNum(num);
 delay(2000);

}

void loop() {
  tm1637.displayStr("DANNLA");
  delay(5000);
  for(int i=10;i>0;i=i-1){
    tm1637.displayNum(i);
    delay(1000);
  }
  tm1637.displayStr("09-08-2009");
  delay(5000);


  tm1637.displayStr("SUDE");
  delay(5000);
  for(int i=10;i>0;i=i-1){
    tm1637.displayNum(i);
    delay(1000);
  }
  tm1637.displayStr("04-05-2009");
  delay(5000);

}
