
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup() {
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  
  for (int i = 0; i <= 255; i++) {
    analogWrite(3, i);    
    analogWrite(5, 255); 
    analogWrite(6, 255);   
    delay(10);  
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(3, i);    
    delay(10);
  }

   for (int i = 0; i <= 255; i++) {
    analogWrite(5, i);    
    analogWrite(3, 255); 
    analogWrite(6, 255);   
    delay(10);  
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(5, i);    
    delay(10);
  }

   for (int i = 0; i <= 255; i++) {
    analogWrite(6, i);    
    analogWrite(3, 255); 
    analogWrite(5, 255);   
    delay(10);  
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(6, i);    
    delay(10);
  }
  delay(1000);
}
