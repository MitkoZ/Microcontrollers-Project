void setup() {
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(1,OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);// don't worry it's just the first part so test it pls.
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(1, LOW);
  for(int i = 0; i < 2; i++) { //Clockwise
      digitalWrite(3, HIGH);
      delay(200);
      digitalWrite(3, LOW);
      digitalWrite(7, HIGH);
      delay(200);
      digitalWrite(7, LOW);
      digitalWrite(1, HIGH);
      delay(200);
      digitalWrite(1, LOW);
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
      }

      for(int i = 0; i < 2; i++) { //Counter-clockwise
      digitalWrite(3, HIGH);
      delay(200);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
      digitalWrite(1, HIGH);
      delay(200);
      digitalWrite(1, LOW);
      digitalWrite(7, HIGH);
      delay(200);
      digitalWrite(7, LOW);
        }
      }
