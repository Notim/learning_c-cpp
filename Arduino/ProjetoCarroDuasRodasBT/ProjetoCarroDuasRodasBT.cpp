/*
	PT-BR:
	
	O trabalho consiste na realizacao de um combate entre carros controlados remotamente por comunicacao bluetooth, 
	as pecas que serao necessarias para faze-lo funcionar são:
	
	1x - Arduino Uno
	1x - Módulo bluetooth modelo HC06;
	1x - Shield modelo L293D;
	1x - Chassi com 2 motores com caixas de redução;
	1x - Suporte para acoplamento de 4x pilhas AA;
	1x - Uma bateria comum de 9v;
	1x - Plugue para bateria
	4x - Pilhas do tipo AA;
	xx - Jumpers diversos para ligações;
	
	Obs: para o correto funcionamento é recomendavel a instalaçao do aplicativo para android "Arduino Bluetooth RC Car"
	https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller
	Obs2: para ocorrer a conexão bluetooth somente é necessário conectar saída tx do módulo na porta rx(0) do arduíno, 
	não sendo necessario nenhuma configuração extra. 
	
	----------------------------------------------------
	@author: João vitor paulino 
	@year: 2018
	
	Firmware arduino controle de motores DC por bluetooth v0.1
	----------------------------------------------------
*/

#include <AFMotor.h> //importando a biblioteca da Shield L923D

/*Secao de declaracao das variaveis e declaracao de entrada dos motores*/
AF_DCMotor Motor1(1);//criacao do objeto Motor1 e Motor2 da classe AF_DCMotor 
AF_DCMotor Motor2(2);//e definição de suas portas de entrada e saida da shield (M1 e M2)

char buf;//char que receberemos a entrada do bluetooth que compararemos com o comando 

void setup(){
	Serial.begin(9600);//Define a banda da comunicacao serial do modulo HC06
}

void loop(){
	while(Serial.available() > 0){ //enquanto a porta serial estiver recebendo qualquer valor

		Motor1.setSpeed(255);//o metodo setspeed está especificado dentro da biblioteca
		Motor2.setSpeed(255);//serve para definir a velocidade dos motores, 255 é o valor maximo da biblioteca 

		buf = Serial.read();//recebendo o valor do modulo bluetooth

		switch (buf){ // comparando a entrada com o devido comando
	
			case 'S':          
				Motor1.run(RELEASE);//motor 1 mantem parado
				Motor2.run(RELEASE);//motor 2 mantem parado
			break;
	
			case 'F':          
				Motor1.run(FORWARD);//motor 1 mantem à frente
				Motor2.run(FORWARD);//motor 2 mantem à frente
			break;
	
			case 'L':
				Motor1.run(BACKWARD);//motor 1 mantem à trás
				Motor2.run(FORWARD); //motor 2 mantem à frente o que o faz girar para a esquerda
			break;
	
			case 'R':
				Motor1.run(FORWARD); //motor 1 mantem à frente
				Motor2.run(BACKWARD);//motor 2 mantem à trás o que o faz girar para a direita
			break;
	
			case 'B':
				Motor1.run(BACKWARD); //motor 1 mantem à trás
				Motor2.run(BACKWARD); //motor 2 mantem à trás
			break;		
	
			case 'G':
				Motor1.setSpeed(100);//reduz a velocidade do motor 1 o que o faz virar para a esquerda suavemente
				Motor1.run(FORWARD); //motor 1 mantem à frente
				Motor2.run(FORWARD); //motor 2 mantem à frente
			break;
	
			case 'H':
				Motor1.setSpeed(100);//reduz a velocidade do motor 1 o que o faz virar de ré para a esquerda suavemente
				Motor1.run(BACKWARD);//motor 1 mantem à trás
				Motor2.run(BACKWARD);//motor 2 mantem à trás
			break;
	
			case 'I':
				Motor2.setSpeed(100);//reduz a velocidade do motor 2 o que o faz virar para a direita suavemente
				Motor1.run(FORWARD); //motor 1 mantem à frente
				Motor2.run(FORWARD); //motor 2 mantem à frente
			break; 
	
			case 'J':
				Motor2.setSpeed(100);//reduz a velocidade do motor 2 o que o faz virar de ré para a direita suavemente
				Motor1.run(BACKWARD);//motor 1 mantem à trás
				Motor2.run(BACKWARD);//motor 2 mantem à trás
			break;				
		}
	}
}
