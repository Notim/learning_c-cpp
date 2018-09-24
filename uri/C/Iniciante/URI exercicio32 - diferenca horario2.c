#include<stdio.h>
int main(){
	int hi,mi,hf,mf,conth,contm;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	conth = 23 + (hf - hi);
	contm = 60 + (mf - mi);
	if(contm >= 60){
		conth++;
		contm=contm-60;	
	};
		
	if((conth >= 24 )&& (contm != 0)){
		conth = conth - 24;
	};
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",conth,contm);
	
}
