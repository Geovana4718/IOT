int buzzer = 3;
#define doo 262
#define re 294
#define mi 330
#define fa 349

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(buzzer,doo,500);
  delay(600);
  tone(buzzer,re,500);
  delay(600);
  tone(buzzer,mi,500);
  delay(600);
  tone(buzzer,fa,500);
  delay(600);
  noTone(buzzer);
}