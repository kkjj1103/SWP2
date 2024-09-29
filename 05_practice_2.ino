#define PIN_LED 7

void setup() {
  // LED 핀을 출력모드로 설정
  pinMode(PIN_LED, OUTPUT);
}

void loop() {

  digitalWrite(PIN_LED, 1);
  delay(1000);
  
  for(int i = 0; i < 5; i++){
    digitalWrite(PIN_LED, 0); //LED를 끔
    delay(100);
    digitalWrite(PIN_LED, 1); //LED를 킴
    delay(100);
  }

  digitalWrite(PIN_LED, 0);

  while(1){
    // infinite loop
  }
  
}
