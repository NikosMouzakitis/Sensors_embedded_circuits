int motor_pin = 9;
void setup() {
  //start serial connection
  Serial.begin(9600);
  pinMode(motor_pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (255.0 / 1023.0);
  analogWrite(motor_pin,voltage);
  
  Serial.println("voltage: ");
  Serial.println(voltage);
}
