  int buttonPin = 2;
  int ledPin = 13;
  int t = 1;
  int f = 0;
  int prevState = f;
  int ledState = f;
  int newState = f;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  //Read button
  if(digitalRead(2)==HIGH){
    newState = t;
  }
  else{
    newState = f;
  }
  
  //If button is pressed, change button state and change LED state
  if(prevState != newState){
    prevState = newState;
    if(prevState == t){
      if(ledState == f){
        ledState == t;
      }
      else{
        ledState == f;
      }
    }
  }
  if(ledState == t){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
