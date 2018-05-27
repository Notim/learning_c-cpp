#include<stdio.h>

int main(){
	int A;
	printf("-----------------------------------------------------\n");
	printf("++      FACULDADE DE TECNOLOGIA DE SAO PAULO       ++\n");
	printf("-----------------------------------------------------\n");
	
	
	printf("digite um numero inteiro para verificar sua polaridade\n");
	scanf("%d",&A);
	printf(verification(A));
	
	getch();
	
}
int verification(int A){
	if(A==0){		
		return("o numero é neutro");				
	}else if(A>0 ){
		return("o numero é positivo");
	}else{
		return("o numero é negativo");
	}
}
