int celsius = 0;

void setup() {
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop() {

    // Вимірюємо температуру за Цельсієм.
    celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);

    if(celsius < 40) {
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
    }
  
    if(celsius > 40) {
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
    }
  
    if(celsius > 80) {
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
    }
  
    if(celsius > 120) {
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH); 
   }
  
   delay(1000);
  
}
