  int timer,timer2;

void setup() {
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  timer=1000;
  timer2=100;

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(timer);

  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(timer2);
}
