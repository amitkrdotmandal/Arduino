int led=12;
const float refVolt=5;
const int posipin1=0;
void setup() {
  pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
int val1=analogRead(posipin1);
 float vlt=((val1)/1024.0*refVolt);
 Serial.println(vlt);
 }
