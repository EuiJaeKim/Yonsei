#define Left 4
#define Right 5

void setup() {
  Serial.begin(9600);
  pinMode(Left, OUTPUT);
  pinMode(Right, OUTPUT);
}

void loop() {
  char Temp = Serial.read();

  switch(Temp)
     {
      case '1':
         digitalWrite(Left,HIGH);
         digitalWrite(Right,LOW);
         break;
      case '2':
         digitalWrite(Right,HIGH);
         digitalWrite(Left,LOW);
         break;
      case '3':
         digitalWrite(Right,HIGH);
         digitalWrite(Left,HIGH);
         break;
      case '4':
         digitalWrite(Right,LOW);
         digitalWrite(Left,LOW);
         break;
     }
}
