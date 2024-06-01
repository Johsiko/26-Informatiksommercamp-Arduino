//output Pins for the motors
int pinForwardRight = 9;
int pinForwardLeft = 8;

//read pins for the controls
int pinForwardRead = 11;
int pinRightRead = 12;
int pinLeftRead = 13;

void setup() {
  //initialising of the ouput Pins
  pinMode(pinForwardRight, OUTPUT);
  pinMode(pinForwardLeft, OUTPUT);

  //initialising the reading Pins
  pinMode(pinForwardRead, INPUT);
  pinMode(pinRightRead, INPUT);
  pinMode(pinLeftRead, INPUT);

  Serial.begin(9600);

}

void loop() {
  
  
  //checks if any buttons were pressed
  if(digitalRead(pinForwardRead) == 0) {
    //checking wether to go forward
    analogWrite(pinForwardRight, 255); 
    analogWrite(pinForwardLeft, 255);
    Serial.println("driving forward");
  } else if(digitalRead(pinRightRead) == 0) {
    //checking wether to turn right
    analogWrite(pinForwardLeft, 255);
    Serial.println("turning right");
  } else if(digitalRead(pinLeftRead) == 0) {
    //checking wether to turn left
    analogWrite(pinForwardRight, 255);
    Serial.println("turnin left");
  //} else if(analogRead(pinBackwardRead) < 1000) {
    //checking wether to go backwards
    //analogWrite(pinBackwardRight, 255);
    //analogWrite(pinBackwardLeft, 255);
  } else {
    //otherwise stand still
    analogWrite(pinForwardRight, 0);
    analogWrite(pinForwardLeft, 0);
    Serial.println("standing");
  }

/*
  Serial.println("12:");
  Serial.println(digitalRead(12));
  Serial.println("13:");
  Serial.println(digitalRead(13));
  Serial.println("11:");
  Serial.println(digitalRead(11));
  
  delay(500);
*/

}