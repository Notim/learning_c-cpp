#include<stdio.h>
int main(){
	int hi,hf,cont;
	scanf("%d %d", &hi, &hf);
	cont = (24 - hi) + hf;
	if(cont > 24){
		cont = cont - 24;
	}else;
	
	printf("O JOGO DUROU %d HORA(S)\n",cont);
	
}
