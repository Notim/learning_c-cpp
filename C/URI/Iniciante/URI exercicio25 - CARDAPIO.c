#include<stdio.h>
main(){
	//          x  y
	double total, menu[2][6] = {/*cod*/{0,1,2,3,4,5},/*price*/{0,4,4.5,5,2,1.5}};
	int i,j,qtd,cod;
	char receive[10];
	gets(receive);
	
	sscanf(receive,"%d %d",&cod,&qtd);
	total = qtd*(menu[1][cod]);
	printf("Total: R$ %.2lf\n",total);
	
	/*for(i=0;i<5;i++){//controla a linha
		for(j=0;j<2;j++){//controla a coluna
			printf("%.2lf\t",menu[j][i]);			
		}
		printf("\n");
	}*/
}
