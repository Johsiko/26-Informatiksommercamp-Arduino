//indexes for the reading Pins
const int forwardButton = A0;
const int rightButton = A1;
const int leftButton = A2;

//Pins for the output Pins
const int rightMotor = 3;
const int leftMotor = 5;

//Pins for the transistors
const int basisMotorRightForward = 1;
const int basisMotorLeftForward = 2;
const int basisMotorRightBackwards = 4;
const int basisMotroLeftBackwards = 6;

void setup() {
  // put your setup code here, to run once:

  //initialising all pins
  pinMode(forwardButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(leftButton, INPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(leftMotor, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  /*
  if(analogRead(forwardButton) > 1000) {
    //if forward button is pressed, both motors go
    analogWrite(rightMotor, 255);
    analogWrite(leftMotor, 255);
    Serial.println("Forward");
  } else if(analogRead(leftButton) > 1000) {
    //if left button is pressed, right motor turns on to turn the arduino left
    analogWrite(rightMotor, 255);
    analogWrite(leftMotor, 0);
    Serial.println("Left");
  } else if(analogRead(rightButton) > 1000) {
    //if right button is pressed, the left motor turns on to turn the arduino right
    analogWrite(rightMotor, 0);
    analogWrite(leftMotor, 255);
    Serial.println("Right");
  } else {
    //if nothing is pressed, nothing moves
    analogWrite(rightMotor, 0);
    analogWrite(leftMotor, 0);
    Serial.println("Stand");
  }
  */
  if(analogRead(forwardButton) > 1000) {
    analogWrite(A3, 255);
    digitalWrite(13, 255);
    
  } else {
    analogWrite(A3, 0);
    digitalWrite(13, 255);
  }
  

  /*
  Serial.println(analogRead(A0));  
  Serial.println(analogRead(A1));
  Serial.println(analogRead(A2));
  Serial.println("");
  delay(100);
  */
}
