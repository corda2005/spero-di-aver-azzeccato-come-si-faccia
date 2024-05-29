#include <SoftwareSerial.h> 
SoftwareSerial rxtx(10, 11);
int v;
 void setup () {
pinMode(10, INPUT);
pinMode(11, OUTPUT);
Serial.begin(9600);
rxtx.begin(9600);
 }

 void loop () {
Serial.println(v);
rxtx.write(v);
delay(1000);
v++;
 }