

int ledVerde1 = 2;
int ledVerde2 = 3;
int ledVermelho1 = 4;
int ledVermelho2 = 5;
int ledAzul1 = 6;
int ledAzul2 = 7;

void setup() {
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
}

void loop() {
  // Primeiro momento: 1 Verde, 1 Vermelho, 1 Azul
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledAzul1, HIGH);
  delay(8000);
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledAzul1, LOW);
  delay(800);

  // Segundo momento: 2 Azuis e 2 Verdes
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAzul1, HIGH);
  digitalWrite(ledAzul2, HIGH);
  delay(8000); 
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAzul1, LOW);
  digitalWrite(ledAzul2, LOW);
  delay(800);

  // Terceiro momento: 1 Verde, 2 Vermelhos, 1 Azul
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  digitalWrite(ledAzul1, HIGH);
  delay(8000); 
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledAzul1, LOW);
  delay(800);

  
}
