int led=12;
const float refVolt=5;
const int posipin1=0;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
   for (int i=1;i<=1000;i=i+50)
   {
  digitalWrite(led,HIGH);
 int val1=analogRead(posipin1);
 float vlt=((val1)/1024.0*refVolt);
 Serial.println(vlt);
delay(50);
   }
   
   for (int i=1;i<=1000;i=i+50)
   {
   digitalWrite(led,LOW);
int val1=analogRead(posipin1);
 

 float vlt=((val1)/1024.0*refVolt);
 Serial.println(vlt);
 delay(50);
   }

}
