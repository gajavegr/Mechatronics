int redPin = 4;
int yellowPin = 3;
int greenPin = 2;
int buttonPin = 5;
int buttonVal = HIGH;

void setup()
{
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  buttonVal = digitalRead(buttonPin);
  if (buttonVal == LOW){   
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(2000);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(500);
    digitalWrite(yellowPin, LOW);
  }
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}
