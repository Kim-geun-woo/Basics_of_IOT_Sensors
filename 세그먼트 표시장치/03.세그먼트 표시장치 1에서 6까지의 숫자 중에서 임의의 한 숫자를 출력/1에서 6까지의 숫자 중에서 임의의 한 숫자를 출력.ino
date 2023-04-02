int num = 0; 

byte numbers[10][8]= {
  {1, 1, 1, 1, 1, 1, 0, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1, 0}, // 2
  {1, 1, 1, 1, 0, 0, 1, 0}, // 3
  {0, 1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1, 0}, // 5
  {1, 0, 1, 1, 1, 1, 1, 0}, // 6
  {1, 1, 1, 0, 0, 1, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 0}, // 8
  {1, 1, 1, 1, 0, 1, 1, 0} // 9
};

void displayNumbers(int n){
  int pin = 2; 
  for(int i = 0; i < 8; i++) {
    digitalWrite(pin+i, numbers[n][i]);
  }
}

void setup() {
  pinMode(12, INPUT);   
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, HIGH); 
}

void loop() {
  if (digitalRead(12) == HIGH){
    num = random(6);
    num = num + 1;
    displayNumbers(num);
  }
  delay(300);
}
