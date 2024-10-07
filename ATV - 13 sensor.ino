#include <SoftwareSerial.h>

// BIBLIOTECA PARA CONEXÃO SERIAL DO SENSOR 

//VARIÁVEL DO SENSOR 
	
int sensor = A0;


void setup()
{
  
  //DEFINIR O MOTOR COMO ENTRADA 
  pinMode(sensor,INPUT);
  //INICIALIZANDO O MONITOR SERIAL 
  Serial.begin(9600);
}

void loop()
{
  
  //GUARDAR O VALOR LIDO PELO SENSOR 
  int umidade = analogRead(sensor);
  //IMPRIMIR VALOR LIDO
  if (umidade < 300) {
    Serial.print("umidade do solo");
    
    }
  
   if (umidade < 500) {
    Serial.print("umidade do solo");
     
   }
  
   if (umidade >= 500) {
    Serial.print("umidade do solo");
     
   }
  delay(3000);
  
  
  
  
  
  
  
  
  
  
  
  
}