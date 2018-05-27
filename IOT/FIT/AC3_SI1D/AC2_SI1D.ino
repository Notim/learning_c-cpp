/*
	SISTEMAS DE INFORMACAO 1D
	JOAO VITOR PAULINO MARTINS RA: 1801021
	Tiago Beneteli Ultramari de Lima RA: 1800804
*/
#include <EEPROM.h>

void ton();
void toff();
void eepromDateEdit();

int ping = 13;
int date[3] = {10,03,18};
int end[3] = {0,1,2};

void setup()
{
  Serial.begin(9600);
  pinMode(ping,1);
}

void loop()
{ 
  toff();
  eepromDateEdit();
  ton();
  delay(100);
}

void ton(){
	digitalWrite(ping,1);
}
void toff(){
	digitalWrite(ping,0);
}
void eepromDateEdit(){
  EEPROM.write(end[0],date[0]);
  EEPROM.write(end[1],date[1]);
  EEPROM.write(end[2],date[2]);
  delay(2000);
  Serial.print("A data inserida e: ");
  Serial.print(EEPROM.read(end[0]));
  Serial.print("/");
  Serial.print(EEPROM.read(end[1]));
  Serial.print("/20");
  Serial.print(EEPROM.read(end[2]));
  Serial.print("\n");
}