#define RX2 D4
#define TX2 D5

void setup() {
  pinMode(D4, INPUT);
  pinMode(D5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600);
  
  Serial2.begin(9600, SERIAL_8N1, RX2, TX2);
}

void loop() {
  Serial.println("ricevo: ");
  if (Serial2.available()>0) { digitalWrite(LED_BUILTIN, HIGH);
      Serial.println(Serial2.read());
  }
}
