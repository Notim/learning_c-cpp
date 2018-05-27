#include<stdio.h>
int main(){
	int vetor[10],valor,i,cont=0;
	printf("digite 10 numeros com um espaco:\n");
	for(i=0;i<10;i++){
		
		scanf("%d",&vetor[i]);
	}
	printf("digite um numero para a comparacao:\n");
	scanf("%d",&valor);
	for(i=0;i<10;i++){
		if(vetor[i]==valor){
			cont=cont+1;
		}else;
	}
	if(cont>0){
		printf("existe o valor em alguma posicao do vetor\n");
	}else{
		printf("nao existe o valor\n");
	}
	
	return 0;	
}
