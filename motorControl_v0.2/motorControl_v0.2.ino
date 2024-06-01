//output Pins for the motors
int pinForwardRight = 0;
int pinBackwardRight = 1;
int pinForwardLeft = 2;
int pinBackwardLef = 3;

//read pins for the controls
int pinForwardRead = A0;
int pinBackwardRead = A1;
int pinRightRead = A2;
int pinLeftRead = A3;

void setup() {
  //initialising of the ouput Pins
  pinMode(pinForwardRight, OUTPUT);
  pinMode(pinBackwardRight, OUTPUT);
  pinMode(pinForwardLeft, OUTPUT);
  pinMode(pinBackwardLeft, OUTPUT);

  //initialising the reading Pins
  pinMode(pinForwardRead, INPUT);
  pinMode(pinBackwardRead, INPUT);
  pinMode(pinRightRead, INPUT);
  pinMode(pinLeftRead, INPUT);

}

void loop() {
  
  //checks if any buttons were pressed
  if(analogRead(pinFowrwardRead) < 1000) {
    //checking wether to go forward
    analogWrite(pinForwardRight, 255); 
    analogWrite(pinFrowardLeft, 255);
  } else if(analogRead(pinRightRead), < 1000) {
    //checking wether to turn right
    analogWrite(pinBackwardRight, 255);
    analogwrite(pinForwardLeft, 255);
  } else if(analogRead(pinLeftRead) < 1000) {
    //checking wether to turn left
    analogWrite(pinFrowardRight, 255);
    analogWrite(pinBackwardLeft, 255);
  } else if(analogRead(pinBackwardRead) < 1000) {
    //checking wether to go backwards
    analogWrite(pinBackwardRight, 255);
    analogWrite(pinBackwardLeft, 255);
  } else {
    //otherwise stand still
    analogWrite(pinBackwardRight, 0);
    analogWrite(pinForwardRight, 0);
    analogWrite(pinBackwardLeft, 0);
    analogWrite(pinForwardLeft, 0);
  }

}
