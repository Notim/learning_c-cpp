#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	double value[3],swap, A,B,C,situacao[2],debug1,debug2;
	int i,j;
	/*
		resultados para situacao situacao 
		situacao[0] = 0 => "NAO FORMA TRIANGULO"
		situacao[0] = 1 => "TRIANGULO RETANGULO"
		situacao[0] = 2 => "TRIANGULO OBTUSANGULO"
		situacao[0] = 3 => "TRIANGULO ACUTANGULO"
		
		situacao[1]= 0 => null
		situacao[1]= 1 => "TRIANGULO EQUILATERO"
		situacao[1]= 2 => "TRIANGULO ISOSCELES"
	*/
	//situacao[0]= 0;situacao[1] = 0;
	
	scanf("%lf",&value[0]);//6 36
	scanf("%lf",&value[1]);//8 64
	scanf("%lf",&value[2]);//10 100
	
	//bubble sort
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			if(value[j] > value[j+1]){
				swap = value[j];
				value[j] = value[j+1];
				value[j+1] = swap;
			}
		}
	}
	
	
	A = value[2];
	B = value[1];
	C = value[0];
	
	situacao[1] = 0;
	if(A >= B+C){
		situacao[0] = 0;			
	}else if((A*A) == (B*B + C*C)){
		situacao[0] = 1;
	}else if((A*A) > (B*B + C*C)){
		situacao[0] = 2;
	}else if((A*A) < (B*B + C*C)){
		situacao[0] = 3;
	}else;
	
	if((A == B)||(A == C)||(B == C)){
		situacao[1] = situacao[1]+1;
	}
	if((A == C) && (B == C)){
		situacao[1] = situacao[1]+1;
	}
	
	if(situacao[0] == 0){
		printf("NAO FORMA TRIANGULO\n");
	}else if(situacao[0] == 1){
		printf("TRIANGULO RETANGULO\n");
	}else if(situacao[0] == 2){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(situacao[0] == 3){
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if(situacao[1] == 2){
		printf("TRIANGULO EQUILATERO\n");
	}else if(situacao[1] == 1){
		printf("TRIANGULO ISOSCELES\n");
	}else;
	
	
	return 0;
}

