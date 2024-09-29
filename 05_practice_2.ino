#define PIN_LED 7

void setup() {
  // LED 핀을 출력모드로 설정
  pinMode(PIN_LED, OUTPUT);
}

void loop() {

  digitalWrite(PIN_LED, LOW);
  delay(1000);
  
  for(int i = 0; i < 5; i++){
    digitalWrite(PIN_LED, HIGH); //LED를 끔
    delay(100);
    digitalWrite(PIN_LED, LOW); //LED를 킴
    delay(100);
  }

  digitalWrite(PIN_LED, HIGH);

  while(1){
    // infinite loop
  }
  
}
