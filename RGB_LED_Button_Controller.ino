int ledRedA = 2;
int ledGreenA = 3;
int ledBlueA = 4;
int Lbutton = 7;
int Rbutton = 8;
int SledRed = 12; 
//ground button is on GND, int creates signal connection to arduino
//L,Rbutton is connection to 7,8
//ledredA,GreenA,BlueA is one LED on pins 2,3,4
//S aka single ledred is connected to pin 12

//created pinmode for LED, A, B, C output, and Sled, and L,R Button
//created digital write for all LED to have control for them on arduinoboard possibly LOL
//Still learning here C++ differnt from python and more strict 
void setup() {
pinMode(ledRedA, OUTPUT);
pinMode(ledGreenA, OUTPUT);
pinMode(ledBlueA, OUTPUT);
pinMode(SledRed, OUTPUT);
pinMode(Lbutton, INPUT_PULLUP);
pinMode(Rbutton, INPUT_PULLUP);
digitalWrite(ledRedA, LOW);
digitalWrite(ledGreenA, LOW);
digitalWrite(ledBlueA, LOW);
digitalWrite(SledRed, LOW);
}

void loop() 
{
  if (digitalRead(Rbutton) == LOW && digitalRead(Lbutton) == LOW) //if checking to see on pin 8 if the L button is pressed = LOW
  {
    digitalWrite(SledRed, HIGH);//left and right buttons activate COP mode red and blue
    digitalWrite(ledBlueA,HIGH);
    digitalWrite(ledGreenA, LOW);
    digitalWrite(ledRedA, LOW);
  }
  else if(digitalRead(Rbutton) == LOW)
  {
    digitalWrite(SledRed, HIGH); // right button activates all red
    digitalWrite(ledBlueA,LOW);
    digitalWrite(ledGreenA, LOW);
    digitalWrite(ledRedA, HIGH);
  }
  else if(digitalRead(Lbutton) == LOW)
  {
    digitalWrite(SledRed, LOW);
    digitalWrite(ledBlueA,LOW);
    digitalWrite(ledGreenA, HIGH);
    digitalWrite(ledRedA, LOW);
  }
  else{
  digitalWrite(SledRed, LOW);
  digitalWrite(ledBlueA,LOW);
  digitalWrite(ledGreenA, LOW);
  digitalWrite(ledRedA, LOW);
  }
}



