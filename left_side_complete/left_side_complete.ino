#define trigPin1 5
#define echoPin1 4
#define coin1 9

int i = 0;

int fadeValue1 ;
int cm1;
int coing1 = 10;
int coing2 = 7;

void setup() {
  Serial.begin (9600);
  
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(coin1, OUTPUT);
    pinMode(coing1, OUTPUT);
    pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(coing1,LOW);
  digitalWrite(coing2,LOW);
  digitalWrite(2,HIGH);
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;
 delay(10);


 
  if (distance1 >= 250 || distance1 <= 0){
    Serial.println("Out of range");
  }
  else {


      cm1 = 250 - distance1;  

  fadeValue1 = map(cm1 , 0, 250, 0, 254);


  analogWrite(coin1, fadeValue1);  // Writes the fadeValue to pin 9 
    Serial.println(distance1);
   // Serial.print("\t");
     //   Serial.println(fadeValue1);
      //Serial.println(i);
  }


  
 i++;
}
