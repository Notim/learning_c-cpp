#include<stdio.h>
main(){
	double A,B,C,AREA[5];
	char receive[25];
	gets(receive);
	
	sscanf(receive,"%lf %lf %lf",&A,&B,&C);
	AREA[0] = (A * C) /2;//area triangulo retangulo
	AREA[1] = (C * C) * 3.14159;//area circulo
	AREA[2] = ((A + B) * C) / 2 ;//area trapezio
	AREA[3] = B * B;//area quadrado
	AREA[4] = A * B ;//area retangulo
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",AREA[0],AREA[1],AREA[2],AREA[3],AREA[4]);
}
