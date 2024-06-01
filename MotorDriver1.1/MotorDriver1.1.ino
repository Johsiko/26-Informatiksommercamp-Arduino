/*
README:
Dieses Script soll dazu dienen einen selbstgebauten 
Motor Treiber zu betreiben

Falls die Drehrichtungen der Motoren nicht stimmen,
kann dies dadurch gefixt werden
jeweils die Werte von pinBackwards*Seite*
und pinForward*Seite* (*Seite* durch jeweils Right
oder Left ersetzten)
zu tauschen um die Drehrichtung umzukehren
Im Zweifelsfall können hierzu auch die Steckrichtung 
der Pins in den Motor umgedreht werden

!!! WARNING !!!
Bei der Kontrolle der Motoren muss zwischen den
jeweiligen Knopfdrücken einen kleinen Augenblick Pause machen.
Wenn zwie Knöpfe gleichzeitig gedrückt werden
entsteht ein Kurzschluss da dann eine direkte Verbindung
von 5V zu GND entsteht durch falsch geöffnete Transistoren
!!!  

@authors
Josua Kock, 
Lena Schmidl,
Im zuge des 26. Informatik-Sommercamps der Uni Passau
*/

//output Pins for the motors
const int pinBackwardsRight = 7;
const int pinForwardRight = 6;
const int pinBackwardsLeft = 9;
const int pinForwardLeft = 8;

void setup() {

  //initialising of the ouput Pins
  pinMode(pinForwardRight, OUTPUT);
  pinMode(pinBackwardsRight, OUTPUT);
  pinMode(pinForwardLeft, OUTPUT);
  pinMode(pinBackwardsLeft, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  //jesus liebt dich
  //gets the direciton form the controller as a String with getDirection()
  if(getDirection == "forward") {
    //drives forward if controller gives forward
    forward();
    Serial.println("driving forward");
  } else if(getDirection == "right") {
    //turns right if controller gives right
    turnRight();
    Serial.println("turning left");
  } else if(getDirection == "left") {
    //turns left if controller gives left
    turnLeft();
    Serial.println("turning left");
  } else if(getDirection == "backwards") {
    //drives backwards if controller gives backwards ich war hier /david
    backwards();
    Serial.println("driving backward");
  } else {
    //stops if nothing is pressed
    stop();
    Serial.println("stoping");
  }

}

//makes the car drive forward
void forward() {
  //puts the other pins to 0 to prevent shortcircuit
  digitalWrite(pinBackwardsRight, 0);
  digitalWrite(pinBackwardsLeft, 0);
  //activates the right transistor so that the motors move accordingly
  digitalWrite(pinForwardRight, 255);
  digitalWrite(pinForwardLeft, 255);
}

//makes the car drive backwards
void backwards() {
  //puts the other pins to 0 to prevent shortcircuit
  digitalWrite(pinForwardRight, 0);
  digitalWrite(pinForwardLeft, 0);
  //activates the right transistor so that the motors move accordingly
  digitalWrite(pinBackwardsRight, 255);
  digitalWrite(pinBackwardsLeft, 255);
}

//makes the car turn right
void turnRight() {
  //puts the other pins to 0 to prevent shortcircuit
  digitalWrite(pinForwardRight, 0);
  digitalWrite(pinBackwardsLeft, 0);
  //activates the right transistor so that the motors move accordingly
  digitalWrite(pinForwardLeft, 255);
  digitalWrite(pinBackwardsRight, 255);
}

//makes the car turn left
void turnLeft() {
  //puts the other pins to 0 to prevent shortcircuit
  digitalWrite(pinForwardLeft, 0);
  digitalWrite(pinBackwardsRight, 0);
  //activates the right transistor so that the motors move accordingly
  digitalWrite(pinBackwardsLeft, 255);
  digitalWrite(pinForwardRight, 255);
}

//makes the car stop
void stop() {
  //puts all pins to 0 so nothing moves
  digitalWrite(pinForwardLeft, 0);
  digitalWrite(pinForwardRight, 0);
  digitalWrite(pinBackwardsLeft, 0);
  digitalWrite(pinBackwardsRight, 0);
}

//TODO: impliment getDirection when reciever and controller work
String getDirection() {
  return "";
}
