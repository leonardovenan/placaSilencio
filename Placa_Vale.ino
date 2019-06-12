
#define pinLed 7
#define pinSom 4
#define ledAlto 8
#define pinAnalogSom A5

bool led1;
bool led2;
int valor_A5 = 0;
long tempoAtual;
long tempoInicial;
int i;


void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  pinMode(ledAlto, OUTPUT);
  pinMode(pinSom, INPUT);
  //pinMode(pinAnalogSom, INPUT);
  led1 = true;
  led2 = false;
  digitalWrite(pinLed, led1);
  digitalWrite(ledAlto, led2);  
}

void loop() {
  // put your main code here, to run repeatedly: 
  if(digitalRead(pinSom) == HIGH){
    led1 = !led1;
    digitalWrite(pinLed, led1);
    for(i = 0; i <= 25; i++){
      led2 = !led2;
      digitalWrite(ledAlto, led2); 
      delay(500);
    }
    led1 = !led1;
    digitalWrite(pinLed, led1);
    digitalWrite(ledAlto, false);    
  }  
  //valor_A5 = analogRead(pinAnalogSom);
  //Serial.print("Ruido: ");
  //Serial.println(valor_A5);
  //delay(100);
}
