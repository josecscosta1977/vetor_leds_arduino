// Projeto vetor de leds
// Programador: Carlos da Costa
// 09/06/22


//Vetor com 5 leds.
int leds[] = {2,3,4,5,6};

void setup(){
  //Funções que especificam que os pinos devem se comportar como saída (OUTPUT)
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  //Estrutura de repetição para acender todos os leds com delay de 100.
  for(int i = 0; i <= 5; i++){
    digitalWrite(leds[i], HIGH);
    delay(100);
  }
  //Estrutura de repetição para apagar todos os leds com deley de 100.
  for(int i = 0; i <= 5; i++){
    digitalWrite(leds[i], LOW);
    delay(100);
  }
}
