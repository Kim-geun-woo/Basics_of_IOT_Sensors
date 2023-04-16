int buttonPin = 4;    // 푸시버튼이 연결된 번호
int ledPin = 13;      // LED가 사용하는 핀 번호
int buttonState = 0;  // 입력핀의 상태를 저장

void setup() {
  pinMode(ledPin, OUTPUT);    // LED는 출력으로 설정
  pinMode(buttonPin, INPUT);  // 푸시버튼은 입력으로 설정
}

void loop() {
  buttonState = digitalRead(buttonPin);  //입력 값을 읽고 저장
                                         // 버튼이 눌렸는지 확인, 버튼이 눌렸으면 입력핀의 상태는 HIGH가 됨
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  //LED 켬
  } else {
    digitalWrite(ledPin, LOW);  //LED 끔
  }
}