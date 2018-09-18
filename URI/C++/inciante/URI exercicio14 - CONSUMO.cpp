#include<stdio.h>
using namespace std;
int main(){
	double kmper, consumo, combust;
	
	scanf("%lf",&kmper);
	scanf("%lf",&combust);
	consumo = kmper / combust;
	printf("%.3lf km/l\n",consumo);
	
	return(0);
}
