#include<stdio.h>
main(){
	int vet[100],verif,i,cont=0;
	printf("digite 100 numeros:\n");
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
	}
	printf("digite um numero para comparar no vetor:\n");
	
	scanf("%d",&verif);
	
	for(i=0;i<100;i++){
		if(verif==vet[i])
			cont++;
		else;
	}
	if(cont>0){
		printf("ACHEI");
	}else {
		printf("NAO ACHEI");
	}
	getch();	
}
