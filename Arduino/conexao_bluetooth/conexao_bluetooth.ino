#include <SoftwareSerial.h>

SoftwareSerial BluetoothSerial(10, 11); // RX, TX
String command = ""; 

long BaudRate[] = {300,1200,2400,4800,9600,14400,19200,28800,38400,57600,115200,230400,460800,921600,1382400}; 


void setup(){ 
	Serial.begin(BaudRate[4]);
	BluetoothSerial.begin(BaudRate[4]);
  
	Serial.println("ARD@UNIXLIKE:~Dev/Bluetooth#");  

}
void loop(){
	
	if (BluetoothSerial.available()){
		while(BluetoothSerial.available()){
			delay(10);
     
			char c = BluetoothSerial.read();     
			command += c;
		} 
		Serial.println(command);
    
		command = "";
	} 
  
	if (Serial.available()){
		delay(10); 
		/*Serial.println(Serial.read());*/
		BluetoothSerial.println(Serial.read());
   }
}

