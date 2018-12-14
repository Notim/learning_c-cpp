#include<stdio.h>
using namespace std;
int main(){
	double resp, receive, value[7];
	int i;
	scanf("%lf",&resp);
	
	receive = resp;
	for(i = 0;i<7;i++){
		value[i] = 0;
	}
	
	while(receive>99){value[6] = value[6] + 1;receive = receive - 100;}
	while(receive>49){value[5] = value[5] + 1;receive = receive - 50;}
	while(receive>19){value[4] = value[4] + 1;receive = receive - 20;}
	while(receive>9 ){value[3] = value[3] + 1;receive = receive - 10;}
	while(receive>4 ){value[2] = value[2] + 1;receive = receive - 5;}				
	while(receive>1.99 ){value[1] = value[1] + 1;receive = receive - 2;}
	while(receive>0.99 ){value[0] = value[0] + 1;receive = receive - 1;}
	
	
	printf("%.0lf\n",resp);
	printf("%.0lf nota(s) de R$ 100,00\n",value[6]);
	printf("%.0lf nota(s) de R$ 50,00\n",value[5]);
	printf("%.0lf nota(s) de R$ 20,00\n",value[4]);
	printf("%.0lf nota(s) de R$ 10,00\n",value[3]);
	printf("%.0lf nota(s) de R$ 5,00\n",value[2]);
	printf("%.0lf nota(s) de R$ 2,00\n",value[1]);
	printf("%.0lf nota(s) de R$ 1,00\n",value[0]);

	return(0);
}
