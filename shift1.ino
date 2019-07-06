
int latchPin = 4;
int clockPin = 3;
int dataPin = 2;

// led at position
int one= 1;
int two = 2;
int three = 4;
int four = 8;
int five = 16;
int six = 32;
int seven = 64;
int eight = 128;
int all = (eight+eight)-1;

void setup() {
  // set all pins to output
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

}

void loop() {
  //
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, seven); // turn on specific led on second register
  shiftOut(dataPin, clockPin, MSBFIRST, all); // turn on specific led on first register
  digitalWrite(latchPin, HIGH);
  delay(500);

}
