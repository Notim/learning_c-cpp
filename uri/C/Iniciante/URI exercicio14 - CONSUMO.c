#include<stdio.h>
main(){
	double kmper, consumo, combust;
	
	scanf("%lf",&kmper);
	scanf("%lf",&combust);
	consumo = kmper / combust;
	printf("%.3lf km/l\n",consumo);
}
