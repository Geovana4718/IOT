# MOTOR

#INTRODUÇÃO

Este projeto foi desenvolvido dentro do tinkercad, na disciplina de Internet das Coisas (IOT), para a criação de um prototipo com arduino 
 que o motor de passo gire continuamente 360 graus e, em seguida, retorne à posição inicial, repetindo esse ciclo indefinidamente.

 #COMPONENTES USADOS

- 1 Arduino Uno
- 1 Drive motor
- 1 Motor de passo
- 6 Jumpers Macho-Macho
- 5 Jumpers Macho-Fêmea 

# EXPLICAÇÃO DO CÓDIGO

// incluir a biblioteca

#include <AccelStepper.h>

// conversão de graus para steps

//360° = 1024 
//180° = 512
//90° = 256
//60° = 170
//45° = 128
//30° = 85
//15° = 28

// variavel para controlar as voltas do motor

#define Voltas 1024

// criando objeto para controlar o motor

AccelStepper motor (AccelStepper::FULL4WIRE,8,10,9,11);

void setup() {

  // definir a velocidade maxima do motor
  
  motor.setMaxSpeed(1000);
  
  // definir aceleração maxima do motor
  
  motor.setAcceleration(100);

}

void loop() {

  // habilitar as portas de controle do motor no arduino
  
  motor.run();
  
  // fazer o motor se movimentar a 360°/1024 passos
  
  motor.moveTo(Voltas);
  
  // girar a sentido contrario
  
  if (motor.distanceToGo() == 0){
  
  // Executa o comando par dar uma volta no sentido contrário e parar no mesmo ponto.
  
   motor.moveTo(-motor.currentPosition());
  }
}

#MONTAGEM DO CIRCUITO

![MOTOR](ATV-14motorpasso.pdf)




