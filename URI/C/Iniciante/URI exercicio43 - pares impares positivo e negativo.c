#include<stdio.h>
int main(void){
	int values[5],i,par = 0, impar = 0, negativo = 0, positivo = 0;
	for(i=0;i<5;i++){
		scanf("%d",&values[i]);
		if(values[i] < 0){
			negativo++;
		}else if(values[i] > 0){
			positivo++;
		}else;
		
		if((values[i]%2)!=0){
			impar++;
		}else{
			par++;
		};
	}
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",positivo);
	printf("%d valor(es) negativo(s)\n",negativo);

	return 0;
}
