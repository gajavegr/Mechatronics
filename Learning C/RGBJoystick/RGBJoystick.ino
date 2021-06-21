// C++ code
//

int rPot = 0;
int bPot = 0;

void setup()
{
  Serial.begin(9600); //Com speed in bits/sec
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // rPot = analogRead(0);
  
  //digitalWrite(11, HIGH);
  red();
  delay(1000);
  //green();
  //delay(1000);
  off();
  delay(1000);
  
  // rgb(150, 0, 150);
}

void rgb(int r, int g, int b) {
  //params should eb 0 to 255!
  analogWrite(9, r);
  analogWrite(10, g);
  analogWrite(11, b);
  
}

void red() {
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(100);
}

void green() {
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(100);
}

void off() {
	analogWrite(9, 0);
  	analogWrite(10, 0);
  	analogWrite(11, 0);
}