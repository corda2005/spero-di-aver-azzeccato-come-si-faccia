#define RX2 D4;
#define TX2 D5; 

void setup() {
  pinMode(D4, INPUT);
  pinMode(D5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("ricevo: ");
  Serial2.begin(9600, SERIAL_8N1, RX2, TX2);
}

void loop() {
  if (Serial2.available()>0) { digitalWrite(LED_BUILTIN, HIGH);
      Serial.write(Serial2.read());
  }
  else digitalWrite(LED_BUILTIN, LOW);
}