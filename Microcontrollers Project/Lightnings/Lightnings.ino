void setup() {
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
}
int redCounter=0;
int greenCounter=250;
void loop() {
            while (redCounter <= 250)
            {
                analogWrite(0,redCounter);
                redCounter = redCounter + 25;
                delay(300);
                analogWrite(1,greenCounter);
                greenCounter = greenCounter - 25;
                delay(300);
                if (redCounter > 250)
                {
                    digitalWrite(3,HIGH);
                    delay(50);
                    digitalWrite(3,LOW);
                }
                if (greenCounter < 0)
                {
                    digitalWrite(4,HIGH);
                    delay(50);
                    digitalWrite(4,LOW);
                }
            }

}


