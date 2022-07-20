
int potIn;
int fwdPing = 5;
int revPin = 6;


void setup()
{
  pinMode(fwdPing , OUTPUT);
  pinMode(revPin, OUTPUT);
  
}

void loop()
{
  potIn = analogRead(A0);
  int output = potIn /4;
  analogWrite(revPin,output);
  delay(100);
}