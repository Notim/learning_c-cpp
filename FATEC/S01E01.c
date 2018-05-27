#include<stdio.h>
int main(){
	double a, b;
	printf("digite o primeiro numero:\n");
	scanf("%lf",&a);
	printf("digite o segundo numero:\n");
	scanf("%lf",&b);
	printf("SOMA = %.2lf\t",(a+b));
	printf("PRODUTO = %.2lf\t",(a*b));
	printf("DIFERENCA = %.2lf\t",(a-b));
	getch();
	
}
