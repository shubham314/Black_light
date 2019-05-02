
//// SPECTACLE FOR THE BLIND ////


//// total time taken  =  18:37 to 18: 57 june 16/18 ////
int triggerPin1 = 2;
int echoPin1 =3;

int triggerPin2 = 4;
int echoPin2 =5;
long duration1, cm1;
long duration2, cm2;
 
int coin1 = 6;
int coin2 = 7;
void setup()
{




  
   pinMode(triggerPin1,OUTPUT);
    pinMode(echoPin1,INPUT);
     pinMode(triggerPin2,OUTPUT);
    pinMode(echoPin2,INPUT);
    pinMode(coin1,OUTPUT);
pinMode(coin2,OUTPUT);
    Serial.begin(9600);
     delay(2000);
}    
  
void ultra1()
{ digitalWrite(triggerPin1,LOW);
     delayMicroseconds(6);
     digitalWrite(triggerPin1, HIGH);
     delayMicroseconds(10);
     digitalWrite(triggerPin1, LOW);
     delayMicroseconds(6);
     duration1 =  pulseIn(echoPin1,HIGH);
     
     cm1= distance(duration1);
     Serial.print("cm1= ");
     Serial.print(cm1);
     delay(50);}



void ultra2()
{ digitalWrite(triggerPin2,LOW);
     delayMicroseconds(6);
     digitalWrite(triggerPin2, HIGH);
     delayMicroseconds(10);
     digitalWrite(triggerPin2, LOW);
     delayMicroseconds(6);
     duration2 =  pulseIn(echoPin2,HIGH);
     
     cm2= distance(duration2);
     Serial.print("cm= ");
     Serial.print(cm);
     delay(50);}


void vibrate() 
{
ultra1();
digitalWrite(coin1,HIGH);
delay(cm1);
ultra1();
digitalWrite(coin1,HIGH);
delay(cm1);


ultra2();
digitalWrite(coin1,HIGH);
delay(cm2);
ultra2();
digitalWrite(coin1,HIGH);
delay(cm2);
  }

     
void loop()
{  
  vibrate();





  
    }

      long distance(long microseconds)
   {
      return microseconds /29/2; 
    }
