int in1=3;
int in2=5;
int switch1=2;
int switch2=7;
int switch3=8;
int switch4=12;

int pot=0;

int in3=9;
int in4=6;


void setup()
{
  Serial.begin(9600);
  //motor A connections
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT); 
  pinMode(in3,OUTPUT); 
  pinMode(in4,OUTPUT); 
  
  //dip switch connection
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);
  pinMode(switch3,INPUT_PULLUP);
  pinMode(switch4,INPUT_PULLUP);
}
void loop()
{
  pot=analogRead(A0);
  pot=map(pot,1023,0,1,255);
 
  //forwards
  if (digitalRead(switch1)==LOW && digitalRead(switch2)==HIGH && digitalRead(switch3)==LOW && digitalRead(switch4)==HIGH)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }
  //backwards
  if (digitalRead(switch1)==HIGH && digitalRead(switch2)==LOW && digitalRead(switch3)==HIGH && digitalRead(switch4)==LOW)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }
  
  //left
  if (digitalRead(switch1)==HIGH && digitalRead(switch2)==LOW && digitalRead(switch3)==LOW && digitalRead(switch4)==HIGH)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
  }
  
  //right
  if (digitalRead(switch1)==LOW && digitalRead(switch2)==HIGH && digitalRead(switch3)==HIGH && digitalRead(switch4)==LOW)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }
  //stop motors
  if (digitalRead(switch1)==LOW && digitalRead(switch2)==LOW || digitalRead(switch3)==LOW && digitalRead(switch4)==LOW || digitalRead(switch1)==HIGH && digitalRead(switch2)==HIGH || digitalRead(switch3)==HIGH && digitalRead(switch4)==HIGH)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,HIGH);
  }
  
  int speed=pot;
 
}


