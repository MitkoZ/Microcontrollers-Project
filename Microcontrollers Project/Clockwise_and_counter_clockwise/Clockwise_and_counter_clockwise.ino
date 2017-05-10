void setup() {
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);// don't worry it's just the first part so test it pls.
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  for(int i = 0; i < 2; i++) { //Clockwise
      digitalWrite(3, HIGH);
      delay(200);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
      digitalWrite(0, HIGH);
      delay(200);
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      delay(200);
      digitalWrite(1, LOW);
      }

      for(int i = 0; i < 2; i++) { //Counter-clockwise
      digitalWrite(1, HIGH);
      delay(200);
      digitalWrite(1, LOW);
      digitalWrite(0, HIGH);
      delay(200);
      digitalWrite(0, LOW);
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);
      delay(200);
      digitalWrite(3, LOW);
        }

        for(int i = 0; i < 2; i++){
              digitalWrite(4, HIGH);
              delay(200);
              digitalWrite(0,HIGH);
              digitalWrite(3, HIGH);
              delay(200);
              digitalWrite(1, HIGH);
              delay(200);
              digitalWrite(4, LOW);
              delay(200);
              digitalWrite(3, LOW);
              digitalWrite(0, LOW);
              delay(200);
              digitalWrite(1, LOW);
              delay(200);
              
          }
      }
