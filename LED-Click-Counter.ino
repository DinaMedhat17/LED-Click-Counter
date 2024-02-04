// C++ code
//
int red =11;
int orange =10;
int green =9;
int button =12;
int Reading =0;
int counter =0;
void setup()
{
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  Reading =digitalRead(button);
if(Reading ==HIGH)
{
 counter++;
  if(counter==1){
    digitalWrite(red,HIGH);
    }
  else if (counter==2)
  {
  digitalWrite(orange,HIGH);
  }
  else if (counter==3)
  {
   digitalWrite(green,HIGH);
  }
  else
  {
   digitalWrite(red,LOW);
   digitalWrite(orange,LOW);
   digitalWrite(green,LOW);
   counter=0;
  }
  delay(250);
 }
  
  
  
}