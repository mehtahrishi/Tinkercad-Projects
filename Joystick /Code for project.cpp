byte led;
int joystick;

void setup() {
 for(byte n=2; n<13; n++)
   pinMode(n,OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  
  joystick= analogRead(A0);
  
  led= map(joystick, 0 ,1023, 2, 12);
  
  digitalWrite(led,1);
    delay(10);
  digitalWrite(led,0);
   
}
