/* This program turns a LED on for one second, then off for one second, 
repeating this process while increasing the time the LED is on by 1 second each interval

Created on Feb 2025
By Daki A.B
*/ 

int blinkTime = 1000;   
// set variable, blinkTime, to 1000

// Initialize digital pin LED_BUILTIN as an output
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  // turn on LED
  delay(blinkTime);
  // wait for duration of blinkTime
  digitalWrite(LED_BUILTIN, LOW);
  // turn LED off
  delay(1000);
  // wait for a second

  blinkTime = blinkTime + 1000;
  // add one second to variable blinkTime 
 }
