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
  newState = digitalRead(2);
  
  //If button is pressed, change button state and change LED state
  if(prevState == f && newState == HIGH){
    prevState = t;
    if(ledState == f){
      ledState = t;
    }
    else{
      ledState = f;
    }
  }

  //If button is released, change button state DO NOT change LED state
  if(prevState == t && newState == LOW){
    prevState = f;
  }

  //Check LED state, and light LED accordingly
  if(ledState == f){
    digitalWrite(ledPin,LOW);
  }
  else{
    digitalWrite(ledPin,HIGH);
  }
}
