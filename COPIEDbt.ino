
#include<SoftwareSerial.h>
int TxD=3;
int RxD=2;
int led=9;

SoftwareSerial BTserial(TxD,RxD);
char c;
void setup() {
  BTserial.begin(9600);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   if (BTserial.available()>0)
 {
    c=BTserial.read();
  Serial.println(c); 
    
  if (c=='a')
   {
   digitalWrite(led,HIGH);
    
    }  
    if (c=='b')
      {
      digitalWrite(led,LOW);
    
      } 
}
} 
