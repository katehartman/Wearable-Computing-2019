/* GDES3015 Wearable Computing 
 * 1 button used to control 1 LED 
 */
 
//button pin
int buttonPin = 5;
//button value
int buttonVal;
//LED pin
int LEDpin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  Serial.println(buttonVal);
  if (buttonVal == 0) {
    digitalWrite(LEDpin, HIGH);
  } else {
    digitalWrite(LEDpin, LOW);
    }
    
  /*
  if (buttonVal == 0) {
    digitalWrite(LEDpin, LOW);
  }*/

 


}
