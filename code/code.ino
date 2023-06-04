const int MSonar = A6;
int datafromsensor = 0;
float distance = 0;


void setup() {
  Serial.begin(9600);
  //right
  pinMode(5, OUTPUT);//speed
  pinMode(9, OUTPUT);//nazad
  pinMode(8, OUTPUT);//go
  //left
  pinMode(7, OUTPUT);//go
  pinMode(6, OUTPUT);//nazad
  pinMode(10, OUTPUT);//speed

  pinMode(MSonar, INPUT);
}

void loop() {
  datafromsensor = analogRead(MSonar);
  distance = 27, 86 * pow(datafromsensor, -1.15);// в сантиметрах
  if (distance <= 5) {
    turnright();
  } else {
    goforward();
  }
  Serial.println(distance);
}

void goforward() {
  analogWrite(10, 150);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 250);
}

void goback() {
  analogWrite(10, 150);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 250);
}

void turnright() {
  analogWrite(10, 150);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 250);
}

void turnleft() {
  analogWrite(10, 150);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 250);
}
