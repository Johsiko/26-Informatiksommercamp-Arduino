int forwardr = 0;
int backr = 1;
int forwardl = 2;
int backl = 3;
int bforward = A1;
int bback = A2;
int bleft = A3;
int bright = A4;

void setup() {
  // put your setup code here, to run once:
  pinMode(forwardr, OUTPUT);
  pinMode(forwardl, OUTPUT);
  pinMode(backl, OUTPUT);
  pinMode(backr, OUTPUT);

  pinMode(bforward, INPUT);
  pinMode(bback, INPUT);
  pinMode(bleft, INPUT);
  pinMode(bright, INPUT);
 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*if(digitalRead(6) > 1000) {
    digitalWrite(2, 255);
  }
  */
  Serial.println(analogRead(bforward));
  Serial.println(analogRead(bback));
  Serial.println(analogRead(bleft));
  Serial.println(analogRead(bright));
  Serial.println("");

 /*if (analogRead(bforward)>1000){ //gerade aus
    digitalWrite(forwardl,HIGH);
    digitalWrite(forwardr,HIGH);
    digitalWrite(backr,LOW);
    digitalWrite(backl,LOW);
    
    if (analogRead(bleft)>1000){ //linkskurve vorwärts
      digitalWrite(forwardl,LOW);
      digitalWrite(forwardr,HIGH);
      digitalWrite(backr,LOW);
      digitalWrite(backl,HIGH);

    }
    else (analogRead(bright)>1000){ //rechtskurve vorwärts
      digitalWrite(forwardl,HIGH);
      digitalWrite(forwardr,LOW);
      digitalWrite(backr,HIGH);
      digitalWrite(backl,LOW);

    }
 }
    
  else if  (analogRead(bback)>1000){ //rcükwerts
    digitalWrite(forwardl,LOW);
    digitalWrite(forwardr, LOW);
    digitalWrite(backr,HIGH);
    digitalWrite(backl,HIGH);
    
    if (analogRead(bleft)>1000){ //linkskurve ´rückwerts
      digitalWrite(forwardl,HIGH);
      digitalWrite(forwardr,LOW);
      digitalWrite(backr,HIGH);
      digitalWrite(backl,LOW);

    }
    else (analogRead(bright)>1000){ //rechtskurve rückwärts
      digitalWrite(forwardl,LOW);
      digitalWrite(forwardr,HIGH);
      digitalWrite(backr,LOW);
      digitalWrite(backl,HIGH);

    }*/
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    //digitalWrite(backr,LOW);
    //digitalWrite(backl,LOW);
    delay(200);
}


