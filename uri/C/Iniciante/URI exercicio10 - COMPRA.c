#include<stdio.h>
main(){
	double compra[3][2],final;
	char scompra1[50],scompra2[50];
	
	gets(scompra1);
	gets(scompra2);
	
	sscanf(scompra1, "%lf %lf %lf", &compra[0][0],&compra[1][0],&compra[2][0]);
	sscanf(scompra2, "%lf %lf %lf", &compra[0][1],&compra[1][1],&compra[2][1]);
	
	final = (compra[1][0]*compra[2][0])+(compra[1][1]*compra[2][1]);
	printf("VALOR A PAGAR: R$ %.2lf\n",final);
	
	/*printf("%.0lf\n",compra[0][0]);
	printf("%.0lf\n",compra[1][0]);
	printf("%.2lf\n",compra[2][0]);*/
}
