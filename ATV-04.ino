// biblioteca do LCD
#include <LiquidCrystal.h>
// criar variavel do lcd
LiquidCrystal lcd(2, 3, 4, 9, 10, 11, 12);
int ledLcd = 13;

// metodo para capturar a distancia
// numero quebrado longo
long distancia(int trigger, int echo){
  // trigger porta de saída
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger,LOW);
  delay(5);// espere 5 milisegundos
  //mandando o sinal
  digitalWrite(trigger,HIGH);
  delay(10);//espera de 10 milisegundos
  digitalWrite(trigger,LOW);//desligar porta
  // encho porta de entrada
  pinMode(echo,INPUT);
  //retorna os dados que a porta recebe
  return pulseIn(echo,HIGH);
 
}

void setup()
{
  pinMode(ledLcd, OUTPUT); // DEFINIR LEDLCD SAIDA
  digitalWrite(ledLcd, HIGH); // ligar os leds do LCD
  lcd.begin(16, 2); // informar que o lcd tem 16 colunas e 2 linhas
  lcd.clear(); // iniciar o lcd limpo
}

void loop()
{
 // transformar o valor recebido para cm
  int cm = 0.01723 * distancia(8, 8);
 
  if(cm<100){
    lcd.setCursor(0,0);
    lcd.print("MANTENHA");
    lcd.setCursor(0,1);
    lcd.print("DISTANCIA");
  }else{
    lcd.clear();
  }
  /*
  lcd.setCursor(0,0);
  lcd.print("Ola");
  lcd.setCursor(0,1);
  lcd.print("Bom dia");
  */
}
