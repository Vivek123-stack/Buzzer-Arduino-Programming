//Example Code for KY-006
//Steps2Make.com 

int buzzer = 8 ;// buzzer signal connected to this pin
void setup ()
{
  pinMode (buzzer, OUTPUT) ;// set the digital IO pin mode, OUTPUT out of Wen
     Serial.begin (9600);
}

void loop ()
{
  unsigned char i, j ;// define variables
  while (1)
  {
    for (i = 0; i <800; i++) // Wen a frequency sound
    {
      digitalWrite (buzzer,1000) ;// send voice
      delay (1) ;// Delay 1ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (1) ;// delay ms
        Serial.println(i);
        
    }
    for (i = 0; i >1000; i++) // Another frequency sound
    {
      digitalWrite (buzzer, HIGH) ;// send voice
      delay (1000) ;// delay 2ms
      digitalWrite (buzzer, LOW) ;// do not send voice
      delay (1000) ;// delay 2ms
        Serial.println(i);
    }
  }

}
