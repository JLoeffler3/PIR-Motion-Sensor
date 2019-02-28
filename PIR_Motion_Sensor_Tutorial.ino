/*
 * PIR Motion Sensor LED light blinking example
 */
 
int ledPin = 5;                // LED pin to turn LED on or off
int inputPin = 2;               // Pin to collect input from the PIR Sensor
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value

  
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    //delay(2000); // wait 2 seconds before checking again to simulate lights in a room staying on for a small amount of time when motion is no longer detected.
    }
   else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    //Constantly check when the light is not on to make sure motion is caught as soon as possible.
  }
}
