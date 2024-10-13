int PIN_ECHO = 2;
int PIN_TRIG = 3;

float time, distance;

void setup() {
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  time = pulseIn(PIN_ECHO, HIGH);
  distance = time * 0.03432 / 2;

  Serial.println(distance, 0);
  delay(100);
}