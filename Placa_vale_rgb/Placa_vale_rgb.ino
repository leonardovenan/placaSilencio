#define RED 5
#define GREEN 9
#define pinSom 4

int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(pinSom, INPUT);

  analogWrite(GREEN, 255);
  analogWrite(RED, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinSom) == HIGH){
    analogWrite(GREEN, 0);
    for(i = 0; i <= 15; i++){
      analogWrite(RED, 255);
      delay(400);
      analogWrite(RED, 0);
      delay(400);
    }
    analogWrite(GREEN, 255);
  }
}
