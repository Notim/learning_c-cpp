#include<stdio.h>
#include<math.h>
main(){
	double A, B, C,rec;	
	char str[20];
	scanf("%lf",&A);//6
	scanf("%lf",&B);//4
	scanf("%lf",&C);//2
	/*
	//para o triangulo existir precisa de que qualquer um dos lados seja menor que a soma dos outros 
	//e menor que a subtracao dos outros 
	*/

	if((A>(B-C)*1)&&(A<B+C)&&(B>(A-C)*1)&&(B<A+C)&&(C>(A-B)*1)&&(C<A+B)){ 
		strcpy(str,"Perimetro = ");
		rec = A + B + C;//perimetro
	}else{//senao escreva area do trapezio
		strcpy(str,"Area = ");
		rec = ((A + B) * C)/2;//area
 	}
	printf("%s%.1lf\n",str,rec);
}
