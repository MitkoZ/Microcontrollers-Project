int buttonState = 0;
const int buttonPin = 0;
int counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(1,OUTPUT);
pinMode(buttonPin, INPUT); //button
}

void RunningCircle(){
int arraySize=4;
int pins[arraySize]={4,3,7,1};
  
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<4;i++)
      {
      digitalWrite(pins[ i ],HIGH);
      delay(50);
      digitalWrite(pins[ i ],LOW);
      delay(50);
      }
    }

    for(int j=0; j<3;j++)
    {
        for(int i=0;i<5;i++)
      {
      digitalWrite(pins[ arraySize -i],HIGH);
      delay(50);
      digitalWrite(pins[ arraySize -i],LOW);
      delay(50);
      }
    }
}

void ClockwiseAndCounterClockwise(){
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

void Christmas(){
const int arraySize=4;
int pins[arraySize]={4,3,7,1};
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

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH){
    counter++;
    if(counter>2){
      counter=0;
     }
   }
  if(counter==0){
    RunningCircle();
    }
  if(counter==1){
     ClockwiseAndCounterClockwise();
    }
  if(counter==2){
     Christmas();
    }

}
