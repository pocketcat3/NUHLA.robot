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

  
}

void loop() {
  if (analogRead(A5) >= 180) {
        turnright();
     }else if (analogRead(A7) >= 160){
        turnleft();
     }
  else  if (analogRead(A6) <= 20 ) {
     goforward();
     }
  } 
           
   
// Serial.println(analogRead(A5));
//Serial.println(analogRead(A6));
// Serial.println(analogRead(A7));
//Serial.println("");
//Serial.println("");
// delay(500);}


void goforward() {
  analogWrite(10, 55);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 50);
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
  analogWrite(10, 100);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  digitalWrite(6, 0);
  analogWrite(5, 100);
}

void turnleft() {
  analogWrite(10, 100);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  digitalWrite(6, 1);
  analogWrite(5, 100);
}

void stopMashine() {
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  digitalWrite(6, 0);
}
