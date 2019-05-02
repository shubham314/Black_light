void setup() {
  // initialize digital pin 13 as an output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);

  
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);

  delay(1000);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
digitalWrite(7, LOW);
  digitalWrite(10, LOW);

  delay(1000);  
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
digitalWrite(7, LOW);
  digitalWrite(10, LOW);

  delay(1000);              // wait for a second

  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);

  delay(1000);  // wait for a second
}
