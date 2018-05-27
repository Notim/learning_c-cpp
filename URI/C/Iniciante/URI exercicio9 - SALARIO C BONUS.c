#include<stdio.h>
main(){
	double salariofixo, vendas, salariofinal;
	char nome[50];
	
	gets(nome);
	scanf("%lf",&salariofixo);
	scanf("%lf",&vendas);
	
	salariofinal = salariofixo + (0.15*vendas);
	printf("TOTAL = R$ %.2lf\n",salariofinal);
	
		
}
