int ledpwm = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpwm, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledpwm, 0);//0 255
  delay(3000);
  analogWrite(ledpwm, 55);//0 255
  delay(3000);
  analogWrite(ledpwm, 150);//0 255
  delay(3000);
  analogWrite(ledpwm, 255);//0 255
  delay(3000);
}
