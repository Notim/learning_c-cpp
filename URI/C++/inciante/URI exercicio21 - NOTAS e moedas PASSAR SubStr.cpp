#include<stdio.h>
#include<stdlib.h>
void zecut()
{
	char buff[10];
	double resp, receive, value[12];
	int i;
	scanf("%s",&resp);
	
	receive = resp;
	
	for(i = 0;i<12;i++){
		value[i] = 0;
	}
	
	while(receive > 99.99)  {value[6] = value[6] + 1;receive = receive - 100;}
	while(receive > 49.99)  {value[5] = value[5] + 1;receive = receive - 50;}
	while(receive > 19.99)  {value[4] = value[4] + 1;receive = receive - 20;}
	while(receive > 9.99 )  {value[3] = value[3] + 1;receive = receive - 10;}
	while(receive > 4.99 )  {value[2] = value[2] + 1;receive = receive - 5;}				
	while(receive > 1.99){value[1] = value[1] + 1;receive = receive - 2;}
	
	
	while(receive > 0.99 ){value[0]  = value[0]   + 1; receive = receive - 1;   }	
	while(receive > 0.49 ){value[7]  = value[7]   + 1; receive = receive - 0.5; }
	while(receive > 0.24 ){value[8]  = value[8]   + 1; receive = receive - 0.25;}
	while(receive > 0.09 ){value[9]  = value[9]   + 1; receive = receive - 0.10;}
	while(receive > 0.04 ){value[10] = value[10]  + 1; receive = receive - 0.05;}
	while(receive > 0.009){value[11] = value[11]  + 1; receive = receive - 0.01;}
	
	printf("NOTAS:\n");
	printf("%.0lf nota(s) de R$ 100.00\n",value[6]);
	printf("%.0lf nota(s) de R$ 50.00\n",value[5]);
	printf("%.0lf nota(s) de R$ 20.00\n",value[4]);
	printf("%.0lf nota(s) de R$ 10.00\n",value[3]);
	printf("%.0lf nota(s) de R$ 5.00\n",value[2]);
	printf("%.0lf nota(s) de R$ 2.00\n",value[1]);
	printf("MOEDAS:\n");
	printf("%.0lf moeda(s) de R$ 1.00\n",value[0]);
	printf("%.0lf moeda(s) de R$ 0.50\n",value[7]);
	printf("%.0lf moeda(s) de R$ 0.25\n",value[8]);
	printf("%.0lf moeda(s) de R$ 0.10\n",value[9]);
	printf("%.0lf moeda(s) de R$ 0.05\n",value[10]);
	printf("%.0lf moeda(s) de R$ 0.01\n",value[11]);
	
}
int main(){
	zecut();
	return 0;
}
