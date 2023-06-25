# NUHLA.robot

`Нюхля - робот для автоматизації проходження лабіринту`

![1665146663_sniffer-mod-1-removebg-preview](https://github.com/pocketcat3/NUHLA.robot/assets/114851989/90e05af4-a73e-46b2-b057-71bfa1e9856a)

#ЯК ВСТАНОВИТИ???
● вам потрібно мати машинку QUANT (https://www.robostore.com.ua/mashinka-robot-arduino-dlya-sorevnovaniy-impro-quant-sport/)

● просто скопіюй цей код як справжня крииса🐁 

const int LSonar = 5;                    const int MSonar = 6; 
const int RSonar = 7;                      void setup() { 
  Serial.begin(9600);   //right        pinMode(LSonar, INPUT);                      pinMode(RSonar, INPUT);             pinMode(MSonar, INPUT);                                                         pinMode(5, OUTPUT);   //speed 
  pinMode(9, OUTPUT);   //nazad   pinMode(8, OUTPUT);   //go left 
  pinMode(7, OUTPUT);   //goforward   pinMode(6, OUTPUT);   //nazad 
  pinMode(10, OUTPUT);  //speed 
} void loop() {                                                int Ldistance = analogRead(LSonar); 
  int Mdistance = analogRead(MSonar);   int Rdistance = analogRead(RSonar)
  if (Mdistance <= 40) {             // в цій f() границі //(L,Rdistance) повинні бути більше.     if (Ldistance >= 120 && Rdistance <= 145) { 
      turnright();}      else if (Rdistance > 145 && Ldistance < 120) { 
      turnleft();}      else { 
      goforward(); }   }  
  else if (250>=Mdistance > 40) {             // в цій //f()границі (L,Rdistance) повинні бути меньше. (якщо //використовувати числа)    if (Ldistance>Rdistance) { 
      turnright();}     else if (Rdistance>Ldistance) { 
      turnleft();}         }                                                                                          //else { 
   // goback();   // } 
} void goforward() { 
  analogWrite(10, 150);   digitalWrite(9, 0); 
  digitalWrite(8, 1);   digitalWrite(7, 1); 
  digitalWrite(6, 0);   analogWrite(5, 250); 
} void goback() { 
  analogWrite(10, 150);   digitalWrite(9, 1); 
  digitalWrite(8, 0);   digitalWrite(7, 0); 
  digitalWrite(6, 1);   analogWrite(5, 250); 
} void turnright() { 
  analogWrite(10, 150); 
  digitalWrite(9, 1);   digitalWrite(8, 0); 
  digitalWrite(7, 1);   digitalWrite(6, 0); 
  analogWrite(5, 250); } 
void turnleft() {   analogWrite(10, 150); 
  digitalWrite(9, 0);   digitalWrite(8, 1); 
  digitalWrite(7, 0);   digitalWrite(6, 1); 
  analogWrite(5, 250); }
