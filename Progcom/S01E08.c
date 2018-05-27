#include<stdio.h>

main(){
	int vet[100],swap,k,i;
	printf("digite 100 numeros:\n");
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
	}
	for(i=0;i<100;i++){
		for(k=0;k<99;k++){
			if(vet[k]>vet[k+1]){
				swap = vet[k];
				vet[k] = vet[k+1];
				vet[k+1] = swap;
			}else;
		}
	}
	for(i=0;i<100;i++){
		printf("%d\t",vet[i]);
	}
	getch();	
}
