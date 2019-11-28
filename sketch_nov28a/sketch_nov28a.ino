int botao=7;
int rele=13;

void setup() {
  pinMode(botao,INPUT);
  pinMode(rele,OUTPUT);
  
}     

void loop() {
    if (digitalRead(botao)==HIGH){
      digitalWrite(rele,!digitalRead(rele));
      delay(250);
    }
}
