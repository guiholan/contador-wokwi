int unidades[7] = {0,1,2,3,4,5,6};
int dezenas[7] = {7,8,9,10,11,12,13};

const byte numeros[10][7] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
};
void setup() {
  for(int i = 0; i<7;i++){
    pinMode(unidades[i],OUTPUT);
    pinMode(dezenas[i],OUTPUT);
  }
}
void loop() {
  for(int i=0; i <=99; i++){
    int dezena = i/10;
    int unidade = i %10;

    mostrarNumero(dezenas,dezena);
    mostrarNumero(unidades,unidade);
    delay(1000);

  }
 
}
void mostrarNumero(int*pinos,int numero){
  for(int i = 0; i<7; i++){
    digitalWrite(pinos[i],numeros[numero][i]);
  }
}
