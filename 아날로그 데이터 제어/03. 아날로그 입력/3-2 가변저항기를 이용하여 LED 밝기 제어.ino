int ledPin = 13;  // LED는 13번 핀
int val = 0;      // 읽은 아날로그 값을 저장하는 변수

void setup() {
  pinMode(ledPin, OUTPUT);  // ledPin 핀을 OUTPUT 으로
}

void loop() {
  val = analogRead(A0);        // A0에서 값을 읽음
  digitalWrite(ledPin, HIGH);  // ledPin을 켬
  delay(val);                  // 잠시 프로그램을 중단
  digitalWrite(ledPin, LOW);   // ledPin을 끔
  delay(val);                  // 잠시 프로그램을 중단
}
