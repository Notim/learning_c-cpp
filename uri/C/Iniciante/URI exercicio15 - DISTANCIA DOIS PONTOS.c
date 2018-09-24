#include<stdio.h>
float raiz_quadrada(float numero);
main(){			
	double value[2][2],dist;
	char receive[50];
	/*
		VALUE[0][0] = x1
		VALUE[0][1] = Y1
		VALUE[1][0] = x2
		VALUE[1][1] = Y2
	*/
	                 /*X2*/      /*X1*/
	gets(receive);sscanf(receive,"%lf %lf",&value[0][1],&value[0][0]);
												  /*X2*/      /*Y2*/	
	gets(receive);sscanf(receive,"%lf %lf",&value[1][1],&value[1][0]);
	dist = raiz_quadrada(((value[0][0]-value[1][0])*(value[0][0]-value[1][0]))+((value[0][1]-value[1][1])*(value[0][1]-value[1][1])));
	
	
	/*dist=sqrt((pow((value[0][0]-value[1][0]),2))+(pow((value[0][1]-value[1][1]),2)));*/ 
	
	printf("%.4lf\n",dist);
	
}
float raiz_quadrada (float numero)
{
    int n;
    float recorre = numero;
    
    for (n = 0; n < 10; ++n)
          recorre = recorre/2 + numero/(2*recorre);
            
    return(recorre);    
}    
