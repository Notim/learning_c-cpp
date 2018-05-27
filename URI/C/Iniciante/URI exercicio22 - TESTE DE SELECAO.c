#include<stdio.h>

main(){
	int A, B, C, D;
	char receive[25];
	
	gets(receive);
	sscanf(receive,"%d %d %d %d",&A,&B,&C,&D);
	int CDsom = C + D, ABsom = A + B;
	int Amod = A%2;
	
	if((B>C)&&(D>A)&&(CDsom>ABsom)&&(C>0)&&(D>0)&&(Amod != 1)){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
	
}
