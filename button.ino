int switchPin=D3;
int LedPin=D0;
int switchValue; 
void setup() {
 pinMode(LedPin, OUTPUT);
 pinMode(switchPin, INPUT_PULLUP); 

}
void loop() {
 switchValue=digitalRead(switchPin);
 digitalWrite(LedPin, !switchValue)

}
