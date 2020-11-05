
int led_red = 0;        // Червоний світлодіод підключений до Pin 0 Arduino.
int led_yellow = 1;     // Жовтий світлодіод підключений до Pin 1 Arduino.
int led_green = 2;      // Зелений світлодіод підключений до Pin 2 Arduino.
int led_orange = 3;     // Оранжевий світлодіод підключений до Pin 3 Arduino.
int led_turqouise = 4;  // Бірюзовий світлодіод підключений до Pin 4 Arduino.
int led_brown = 5;      // Коричневий світлодіод підключений до Pin 5 Arduino.

void setup() {
    // Налаштовуємо всі світлодіоди як вихід (OUTPUT).
    pinMode(led_red, OUTPUT);
    pinMode(led_yellow, OUTPUT);
    pinMode(led_green, OUTPUT);
    pinMode(led_orange, OUTPUT);
    pinMode(led_turqouise, OUTPUT);
    pinMode(led_brown, OUTPUT);
}

void loop() {

    // Вмикаємо червоний світлодіод, а коричнивий індикатор вимикаємо.
    digitalWrite(led_brown, LOW);
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

    //  Вмикаємо оранжевий світлодіод, а зелений індикатор вимикаємо.
    digitalWrite(led_green, LOW);
    digitalWrite(led_orange, HIGH);
    delay(1000);  // Таймер на 1 секунду.

    // Вмикаємо бірюзовий світлодіод, а оранжевий індикатор вимикаємо. 
    digitalWrite(led_orange, LOW);
    digitalWrite(led_turqouise, HIGH);
    delay(1000);  // Таймер на 1 секунду.

    // Вмикаємо коричнивий світлодіод, а бірюзовий індикатор вимикаємо.
    digitalWrite(led_turqouise, LOW);
    digitalWrite(led_brown, HIGH);
    delay(1000);  // Таймер на 1 секунду.

}
