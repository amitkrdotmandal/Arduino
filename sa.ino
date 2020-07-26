int raw1= 0;

int i= 4;
int j= 4;
int analogPin=A1;
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
    i=100;
  }

analogWrite(10,i);

raw1= analogRead(analogPin);
Serial.println(raw1);
delay(100);

  }

}

