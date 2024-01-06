int fl=5;
int buz=6;
int led=8;
int flag;// status

void setup() {
  // put your setup code here, to run once:
pinMode(fl,INPUT);
pinMode(buz,OUTPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
flag= digitalRead(fl);
if( flag==1)
{
  digitalWrite(buz,HIGH);
  digitalWrite(led,HIGH);
  Serial.println("Flame detected");
  delay(2000);
}
else
{
  digitalWrite(buz,LOW);
  digitalWrite(led,LOW);
  Serial.println("Flame detected");
  delay(2000);
}
}