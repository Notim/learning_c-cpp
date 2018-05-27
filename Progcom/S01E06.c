#include<stdio.h>

main(){
	int vet[100],i;
	printf("digite 100 numeros:\n");
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
	}
	for(i=99;i>=0;i--){
		if(vet[i]>0){
			printf("%d\t",vet[i]);
		}
	}
	getch();	
}
