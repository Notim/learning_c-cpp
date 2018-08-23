#include<stdio.h>
using namespace std;
int main(){
	int valor1,valor2,swap,resto;
	scanf("%d",&valor1);
	scanf("%d",&valor2);
	
	if(valor1<valor2){
		swap = valor2;
		valor2 = valor1;
		valor1 = swap;
	}
		
	resto = (valor1 % valor2);
	
	if(resto==0){
		printf("Sao Multiplos\n");	
	}else{
		printf("Nao sao Multiplos\n");
	}	
	return(0);
}
