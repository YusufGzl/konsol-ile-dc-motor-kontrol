// Motor pinleri
int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;
int ENA = 5;
int ENB = 6;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
}

void ileri() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENB, 200);
}

void geri() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENB, 200);
}

void sag() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENB, 200);
}

void sol() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENB, 200);
}

void dur() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    char komut = Serial.read();
    if (komut == 'w') ileri();
    else if (komut == 's') geri();
    else if (komut == 'a') sol();
    else if (komut == 'd') sag();
    else if (komut == 'x') dur();
  }
}
