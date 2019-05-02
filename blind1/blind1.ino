#define trigPin 2
#define echoPin 3
#define coin 9
int fadeValue2 ;
int cm2;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(coin, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance >= 250 || distance <= 0){
    Serial.println("Out of range");
  }
  else {


      cm2 = 250 - distance;  

  fadeValue2 = map(cm2 , 0, 250, 0, 254);


  analogWrite(coin, fadeValue2);  // Writes the fadeValue to pin 9 
    Serial.print(distance);
    Serial.print("\t");
        Serial.println(fadeValue2);
  }
  delay(5);
}
