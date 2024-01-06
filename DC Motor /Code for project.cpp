// C++ code
//
int brightness = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  // Its block code for the project
  for (brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(9, brightness);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(3, brightness);
    delay(30); // Wait for 30 millisecond(s)
  }
}