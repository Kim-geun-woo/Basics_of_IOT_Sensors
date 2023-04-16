int myLed[] = { 2, 4, 6 };  // LED 번호를 배열로 지정
int ledDelay[] = { 500, 300, 500 };

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(myLed[i], OUTPUT);  //pinMode 설정
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(myLed[i], HIGH);
    delay(ledDelay[i]);
    digitalWrite(myLed[i], LOW);
    delay(ledDelay[i]);
  }
}
