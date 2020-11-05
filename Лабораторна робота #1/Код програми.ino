 
int led_red = 0;    // Червоний світлодіод підключений до Pin 0 Arduino.
int led_yellow = 1; // Жовтий світлодіод підключений до Pin 1 Arduino.
int led_green = 2;  // Зелений світлодіод підключений до Pin 2 Arduino.

void setup() {
    // Налаштовуємо всі світлодіоди як вихід (OUTPUT).
    pinMode(led_red, OUTPUT);
    pinMode(led_yellow, OUTPUT);
    pinMode(led_green, OUTPUT);
}

void loop() {

    // Вмикаємо червоний світлодіод, а зелений індикатор вимикаємо.
    digitalWrite(led_green, LOW);
    digitalWrite(led_red, HIGH);
    delay(1000);  // Таймер на 1 секунду.

    // Вмикаємо жовтий світлодіод, а червоний індикатор вимикаємо.
    digitalWrite(led_red, LOW);   
    digitalWrite(led_yellow, HIGH);
    delay(1000);  // Таймер на 1 секунду.

    // Вмикаємо зелений світлодіод, а жовтий індикатор вимикаємо.
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_green, HIGH);
    delay(1000);  // Таймер на 1 секунду.

}
