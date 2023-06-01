
void setup() {
  //right
  pinMode(5, OUTPUT);//speed
  pinMode(9, OUTPUT);//nazad
  pinMode(8, OUTPUT);//go
  //left
  pinMode(7, OUTPUT);//go
  pinMode(6, OUTPUT);//nazad
  pinMode(10, OUTPUT);//speed
}

void loop() {
  goforward();
  delay(1000);
  goback();
  delay(1000);
  turnleft();
  delay(1000);
  turnright();
  delay(1000);
}

void goforward(){
  analogWrite(10, 150);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 250);
}

void goback(){
  analogWrite(10, 150);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 250);
}

void turnright(){
  analogWrite(10, 150);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 250);
}

void turnleft(){
  analogWrite(10, 150);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 250);
}
