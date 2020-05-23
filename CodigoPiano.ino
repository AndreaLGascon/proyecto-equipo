#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 494

const int BUZZER = 11;
const int LED = 13;

const int BUTTON_C = 8;
const int BUTTON_D = 7;
const int BUTTON_E = 6;
const int BUTTON_F = 5;
const int BUTTON_G = 4;
const int BUTTON_A = 3;
const int BUTTON_B = 2;



void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_C, INPUT);
  digitalWrite(BUTTON_C,HIGH);
  pinMode(BUTTON_D, INPUT);
  digitalWrite(BUTTON_D,HIGH);
  pinMode(BUTTON_E, INPUT);
  digitalWrite(BUTTON_E,HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalWrite(BUTTON_F,HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalWrite(BUTTON_G,HIGH);
  pinMode(BUTTON_A, INPUT);
  digitalWrite(BUTTON_A,HIGH);
  pinMode(BUTTON_B, INPUT);
  digitalWrite(BUTTON_B,HIGH);
  
  digitalWrite(LED,LOW);
}

void loop()
{
  while(digitalRead(BUTTON_C) == LOW)
  {
    tone(BUZZER,NOTE_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_D) == LOW)
  {
    tone(BUZZER,NOTE_D);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_E) == LOW)
  {
    tone(BUZZER,NOTE_E);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_F) == LOW)
  {
    tone(BUZZER,NOTE_F);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_G) == LOW)
  {
    tone(BUZZER,NOTE_G);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_A) == LOW)
  {
    tone(BUZZER,NOTE_A);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_B) == LOW)
  {
    tone(BUZZER,NOTE_B);
    digitalWrite(LED,HIGH);
  }

  noTone(BUZZER);
  digitalWrite(LED,LOW);

}
