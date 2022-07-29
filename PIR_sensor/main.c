int led = 13;                // the pin that the LED is atteched to
int sensor = 2;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;                 // variable to store the sensor status (value)

void setup() {
  pinMode(led, OUTPUT);      // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input
  Serial.begin(9600);        // initialize serial
}

void loop(){ 
  val = digitalRead(sensor);   // read sensor value
  if (val == HIGH) {           // check if the sensor is HIGH 
  		digitalWrite(led, HIGH);   // turn LED ON
    	Serial.println("Motion detected!"); 
    	delay(500);                // delay 500 milliseconds 
    	digitalWrite(led, LOW);   // turn LED OFF
  }
}
