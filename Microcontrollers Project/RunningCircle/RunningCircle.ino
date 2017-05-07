void setup() {
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(1,OUTPUT);
}

void loop() {
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
