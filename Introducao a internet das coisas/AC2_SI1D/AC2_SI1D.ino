/*
	JOAO VITOR PAULINO MARTINS RA: 1801021
	Tiago Beneteli Ultramari de Lima RA: 1800804
*/


int BUTTON = 2;
int LED1 = 13;
int LED2 = 6;
int LED3 = 7;
 
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  int cont = digitalRead(BUTTON);
  
  if(cont != HIGH){
  	digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    delay(1000);    
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(1000);
  }
}