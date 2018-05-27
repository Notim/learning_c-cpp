#include<stdio.h>
main(){
	int num,horastrab;
	float salariohr,salariofinal;
	
	scanf("%d",&num);
	scanf("%d",&horastrab);
	scanf("%f",&salariohr);
	
	salariofinal = horastrab * salariohr;
	
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %.2f\n",salariofinal);
	/* NUMBER = 25
		SALARY = U$ 550.00*/	
	
}
