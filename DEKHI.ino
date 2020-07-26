int analogPin=A0;
int raw= 0;
int raw1= 0;
float Vin;
float Vout= 0;
float R1= 9901;
float R2= 0;
float uffer= 0;
float uffe;
int i= 4;
int j= 4;

void setup()
{
 pinMode(10, OUTPUT);
Serial.begin(9600);
}

void loop()
{
for (int j = 0; j <= 200; j++) {
  if (j<100) {
i=255;
  }
  else{
    i=240;
  }

analogWrite(10,i);
uffe= 256.0/(i+1);
Vin= 5.0 /uffe;


raw= analogRead(analogPin);
raw1= analogRead(A1);

uffer= raw * Vin*1.0;
Vout= (uffer)/1024.0;
uffer= (Vin/Vout) -1;
R2= R1 * uffer;
//Serial.println(Vout);
//Serial.println(Vin/(R1+R2)*100000);
//Serial.println(Vin);
//Serial.print("R2: in K Ohm ");
Serial.println(raw1);
//Serial.println(R2/1000);
delay(100);
  }

}

