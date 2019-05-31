int led2=D1;
int led1=D0;
int analogValue;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue=analogRead(A0);
  Serial.println(analogValue);
  if(analogValue <300) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    
  }
  else{
        digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}
