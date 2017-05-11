int buttonState = 0;
const int buttonPin = 2;
int counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(buttonPin, INPUT); //button
digitalWrite(buttonPin,HIGH);// if this isn't in the code it doesn't work
}
const int arraySize=4;
const int pins[arraySize]={4,3,1,0};
void RunningCircle(){
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<4;i++)
      {
      digitalWrite(pins[i],HIGH);
      delay(80);
      digitalWrite(pins[i],LOW);
      delay(80);
      }
    }

    for(int j=0; j<3;j++)
    {
        for(int i=0;i<5;i++)
      {
      digitalWrite(pins[arraySize -i],HIGH);
      delay(80);
      digitalWrite(pins[arraySize -i],LOW);
      delay(80);
      }
    }

}

void ClockwiseAndCounterClockwise(){
digitalWrite(3, HIGH);
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

void Christmas(){
      for(int i=0;i<4;i++)
      {
        digitalWrite(pins[i],HIGH);
        delay(200);
      }
      for(int i=0;i<4;i++)
      {
        digitalWrite(pins[i],LOW);
        delay(200);
      }
}

void Lightnings(){
int redCounter=0;
int greenCounter=250;
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
                    break;
                }
            }

}
void loop() {
  buttonState = digitalRead(buttonPin);
  delay(1000);
  if(buttonState==0){//button is pressed
    counter++;
   }
  if(counter>3){
      counter=0;
     }
     
  if(counter==0){
    Christmas();
    }
  if(counter==1){
     ClockwiseAndCounterClockwise();
    }
  if(counter==2){
    RunningCircle();
    }
   if(counter==3){
     Lightnings();
    }

}
