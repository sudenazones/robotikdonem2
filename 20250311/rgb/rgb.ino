
 int r=3;
 int b=5;
 int g=6;

void setup() {

pinMode(r,OUTPUT);
pinMode(b,OUTPUT);
pinMode(g,OUTPUT);

}

void loop() {
  analogWrite(r,random(0,200));
  analogWrite(b,random(0,200));
  analogWrite(g,random(0,200));
  delay(500);

}
