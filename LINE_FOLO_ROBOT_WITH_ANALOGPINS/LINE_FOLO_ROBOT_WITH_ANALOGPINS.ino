#define LeftMotorForward  2 
#define LeftMotorReverse  3
#define RightMotorForward  4 
#define RightMotorReverse   5


#define leftIR   A0
#define rightIR  A1
#define middleIR A2



void setup() {
pinMode(RightMotorForward,OUTPUT); 
pinMode(RightMotorReverse,OUTPUT);
pinMode(RightMotorForward,OUTPUT);
pinMode(LeftMotorReverse,OUTPUT);   
pinMode (leftIR,INPUT);
pinMode(rightIR,INPUT);
pinMode(middleIR,INPUT);

Serial.begin(9600);
}
void loop() {
 
if (analogRead(leftIR) <500 && analogRead(rightIR) >500 && analogRead(middleIR) >500) //Forward
{
  analogWrite(LeftMotorForward,150);
  analogWrite(RightMotorForward,150);
  
}

else if (analogRead(leftIR) <500 && analogRead(rightIR)>500  && analogRead(middleIR) >500) //RIGHT
  {
  analogWrite(LeftMotorForward,130);
  analogWrite(RightMotorForward,LOW);
  }
else if (analogRead(leftIR) >500 && analogRead(rightIR) <500&& analogRead(middleIR)>500) //LEFT
  {
  analogWrite(LeftMotorForward,LOW);
  analogWrite(RightMotorForward,130);
  }

  else if (analogRead(leftIR) <500 && analogRead(rightIR) <500&& analogRead(middleIR)>500) //stop
  {
  analogWrite(LeftMotorForward,LOW);
  analogWrite(RightMotorForward,LOW);
  }
delay(1);
}
