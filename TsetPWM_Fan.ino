int Fan_pin = 3;
void setup() {
  Serial.begin(9600);
  pinMode(Fan_pin, OUTPUT);
}
void loop() {
    analogWrite(Fan_pin, 0);
    //digitalWrite(Fan_pin, HIGH);
delay(50);
}
