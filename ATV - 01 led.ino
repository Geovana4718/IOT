// C++ code
//comentários pequenos 
/*comentários grandes*/

//variavel para capturar a porta de conexão do led 
int led = 4;

void setup()//configuração inicial roda uma vez no início 
{ //definir configuração do led INPUT (entrada) OUTPUT (saída)
  pinMode(led, OUTPUT); //defini o led como saída 
/*
função de definição de entrada/saida do equipamento 
receber 2 parametros:
(ports que o dispositivo esta conectado,OUTPUT)
*/
  

 
}

//função de execução de instruções infinitas/loop
void loop()
{ 
  //ligar o meu led, para ligar usa-se (HIGH) 
  digitalWrite(led,HIGH);
  //adicionar uma pausa 
  delay(1000); // espere 2 segundos com led ligado
  // desligar o led, usa-se (LOW)
  digitalWrite(led,LOW);
  delay(1000); // espere 2 segundos com led desligado

}