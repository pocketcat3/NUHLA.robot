const int MSonar = A6;
const int LSonar = A5;
const int RSonar = A7;


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
  if (analogRead(MSonar) <= 60 ) {
     goforward();
     if (analogRead(LSonar) >= 200) {
        turnright();
     }else if (analogRead(RSonar) >= 190){
        turnleft();
     }
  } 
           
   
 Serial.println(analogRead(LSonar));
 Serial.println(analogRead(MSonar));
 Serial.println(analogRead(RSonar));
  Serial.println();
 Serial.println();
 delay(5000);
}

void goforward() {
  analogWrite(10, 50);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 56);
}

void goback() {
  analogWrite(10, 50);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 50);
}

void turnright() {
  analogWrite(10, 50);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 50);
}

void turnleft() {
  analogWrite(10, 50);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 50);
}

void stopMashine() {
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(6, 0);
}
