#define trigPin1 2
#define echoPin1 3
#define coin1 9

#define trigPin2 4
#define echoPin2 5
#define coin2 8


int fadeValue1 ;
int cm1;
int coing1 = 10;
int coing2 = 7;
int fadeValue2 ;
int cm2;
void setup() {
  Serial.begin (9600);
  
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(coin1, OUTPUT);
    pinMode(coing1, OUTPUT);
  
pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(coin2, OUTPUT);
        pinMode(coing2, OUTPUT);
}

void loop() {
  digitalWrite(coing1,LOW);
  digitalWrite(coing2,LOW);
 
  
  
  
  



  long duration2, distance2;
  digitalWrite(trigPin2, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin2, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2/2) / 29.1;
 delay(5);




  if (distance2 >= 250 || distance2 <= 0){
    Serial.println("Out of range");
  }
  else {


      cm2 = 250 - distance2;  

  fadeValue2 = map(cm2 , 0, 250, 0, 254);


  analogWrite(coin2, fadeValue2);  // Writes the fadeValue to pin 9 
    Serial.print(distance2);
    Serial.print("\t");
        Serial.println(fadeValue2);
  }


 
}
