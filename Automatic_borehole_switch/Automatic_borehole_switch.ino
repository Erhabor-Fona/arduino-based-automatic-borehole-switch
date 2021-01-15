#define relay A0
#define boreHole A1
const int redLED = 3;
const int blueLED = 4;
const int yellowLED = 5;
const int greenLED = 6;
const int full_1 = 11;
const int full_2 = 8;
int readFull_1;
int readFull_2;
void setup() {
  pinMode(relay,OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(full_1, INPUT);
  pinMode(full_2, INPUT);
  
  digitalWrite(relay, LOW);
  digitalWrite(redLED, LOW);
   digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, LOW);

}

void loop() {
  readFull_1 = digitalRead(full_1);
  readFull_2 = digitalRead(full_2);

  if(readFull_1 == HIGH && readFull_2== LOW){
    digitalWrite(relay, LOW);
    digitalWrite(boreHole, HIGH);
    digitalWrite(redLED, HIGH);
  }
else {
  
  digitalWrite(relay, HIGH);
  digitalWrite(boreHole, HIGH);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, HIGH);
}

  if (readFull_2 == HIGH){
    digitalWrite(boreHole, LOW);
    digitalWrite(greenLED,HIGH);
  }
else {
  digitalWrite(boreHole, HIGH);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED,HIGH);
}
}
