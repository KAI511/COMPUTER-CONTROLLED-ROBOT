const int l1=2;
const int l2=3;
const int r1=0;
const int r2=1;

void Forward()
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}

void Stop()
{
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
}

void Reverse()
{
digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
}

void Right()
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
}

void Left()
{
digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}

void setup()
{
Serial.begin(9600);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(r1,OUTPUT);
pinMode(r2,OUTPUT);
}

void loop()
{
while(!Serial.available());
char c= Serial.read();

Serial.println(c);
if(c=='a')
{
Left();
}
else if(c=='d')
{
Right();
}
else if(c=='w')
{
Forward();
}
else if(c=='s')
{
Reverse();
}
else
Stop();
}