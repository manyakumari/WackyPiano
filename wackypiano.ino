int trig = 11;
int echo = 12;
int distance = 0;
int duration = 0;
int red = 3;
int green = 5;
int blue = 6;
int buzz = 13;



void setup() {
  // put your setup code here, to run once:
 pinMode(buzz,OUTPUT);
 pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delay(2);
digitalWrite(trig,HIGH);
delay(10);
digitalWrite(trig,LOW);
duration = pulseIn(echo, HIGH);
distance = (duration*0.034)/2;
Serial.println(distance);

digitalWrite(red,LOW);
digitalWrite(green,LOW);
digitalWrite(blue,LOW);

if (distance<=20)
{
  tone(buzz,523);
  analogWrite(red, 237);
analogWrite(green, 85);
analogWrite(blue, 100);
delay(500);
}
if (distance>20 and distance<=40)
{
  tone(buzz,587);
  analogWrite(red, 255);
analogWrite(green, 206);
analogWrite(blue, 84);
delay(500);
}
if (distance>40 and distance <=60)
{
  tone(buzz,659);
  analogWrite(red, 160);
analogWrite(green, 213);
analogWrite(blue, 104);
delay(500);
}
if (distance>60 and distance<=80)
{
  tone(buzz,698);
  analogWrite(red, 79);
analogWrite(green, 193);
analogWrite(blue, 232);
delay(500);
}
if (distance>80 and distance<=100)
{
  tone(buzz,784);
  analogWrite(red, 172);
analogWrite(green, 146);
analogWrite(blue, 235);
delay(500);
}
 else
  {
    noTone(buzz);
  }

}
