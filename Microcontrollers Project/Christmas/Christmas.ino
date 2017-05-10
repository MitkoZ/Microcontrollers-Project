void setup() {
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
}
const int arraySize=4;
int pins[arraySize]={4,3,1,0};
void loop() 
{

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

