#define RightMotorForward 2
#define RightMotorReverse 3
#define LeftMotorForward 4
#define LeftMotorReverse 5

#define RightIR 6 
#define LeftIR  7


void setup() {
pinMode(RightMotorForward,OUTPUT); 
pinMode(RightMotorReverse,OUTPUT);
pinMode(RightMotorForward,OUTPUT);
pinMode(LeftMotorReverse,OUTPUT);
Serial.begin(9600);


void loop()  {
  if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == LOW) //Forward
{
  digitalRead(LeftMotorForward,HIGH);
  digitalRead(RightMotorForward,HIGH);
}
if (digitalRead(leftIR) == HIGH&& digitalRead(rightIR) == HIGH) //STOP
 {
   digitalRead(LeftMotorForward,LOW);
   digitalRead(RightMotorForward,LOW);
 }
else if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == HIGH) //RIGHT
  {
  digitalRead(LeftMotorForward,HIGH);
  digitalRead(RightMotorForward,LOW);
  }
else if (digitalRead(leftIR) == LOW && digitalRead(rightIR) == HIGH) //LEFT
  {
  digitalRead(LeftMotorForward,LOW);
  digitalRead(RightMotorForward,HIGH);
  }
}
