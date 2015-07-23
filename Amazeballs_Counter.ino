int pin_1 = 2;
int pin_2 = 3;
int pin_3 = 4;
int pin_4 = 5;

void setup() {
  pinMode(pin_1, OUTPUT);
  pinMode(pin_2, OUTPUT);
  pinMode(pin_3, OUTPUT);
  pinMode(pin_4, OUTPUT);
}

void loop() {
  digitalWrite(pin_1, 1);
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 0);
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 1);
  digitalWrite(pin_2, 0);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 0);
  digitalWrite(pin_2, 0);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 1);
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 0);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 0);
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 0);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 1);
  digitalWrite(pin_2, 0);
  digitalWrite(pin_3, 0);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 0);
  digitalWrite(pin_2, 0);
  digitalWrite(pin_3, 0);
  digitalWrite(pin_4, 1);
  delay(1000);
  digitalWrite(pin_1, 1);
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 0);
  delay(1000);
  digitalWrite(pin_1, 0 );
  digitalWrite(pin_2, 1);
  digitalWrite(pin_3, 1);
  digitalWrite(pin_4, 0);
  delay(1000);
  
}
