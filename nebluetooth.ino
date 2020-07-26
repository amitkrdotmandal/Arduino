/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
int lamp=8;
int st_lamp=0;


char receive='a';

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);

}


// the loop routine runs over and over again forever:
void loop() {
 if (Serial.available())
 {
    receive=Serial.read();
  Serial.print(receive); 
    
 }  
  


  
  if ( receive=='1')
  {
    digitalWrite(lamp,HIGH);
    
  }

  if (receive=='0')
 {
   digitalWrite(lamp,LOW);

  }
  
  
  
}
