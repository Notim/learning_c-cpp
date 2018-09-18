#include<stdio.h>
main(){
	int i,vector[100];
	
	printf("digite numeros e precione enter:\n");
	for(i=0;i<100;i++){
		scanf("%d",&vector[i]);
	}
	for(i=0;i<100;i++){
		if(vector[i] > 0){
			printf("%d ",vector[i]);
		}else;			
	}
	getch();
}
