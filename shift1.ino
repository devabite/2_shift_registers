// set the pin variables 
int latchPin = 4;
int clockPin = 3;
int dataPin = 2;

// each variable is a led at a specific position
// meaning variable one is the first led in the row.
int one= 1;      // led on register pin 15(Q0)
int two = 2;     // led on register pin 1(Q1)
int three = 4;   // led on register pin 2(Q2)
int four = 8;    // led on register pin 3(Q3)
int five = 16;   // led on register pin 4(Q4)
int six = 32;    // led on register pin 5(Q5)
int seven = 64;  // led on register pin 6(Q6)
int eight = 128; // led on register pin 7(Q7)
int all = 255;   // Turn on all led's

void setup() {
  // set all pins to output
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, seven); // turn on specific led on second register
  shiftOut(dataPin, clockPin, MSBFIRST, all); // turn on specific led on first register
  digitalWrite(latchPin, HIGH);
  delay(500);

}
