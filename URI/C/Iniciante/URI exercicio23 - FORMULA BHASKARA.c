#include<stdio.h>
#include<math.h>
main(){
	double a,b,c,r1 ,r2, delta;
	char receive[20];
	gets(receive);
	sscanf(receive,"%lf %lf %lf",&a,&b,&c);
	//formula de bhaskara x'= -b +- raiz ( b^2 - 4 * a * c) / 2 * a
	delta = (b * b) - (4*a*c);
	
	if((delta == 0)||(delta < 0)||(a == 0)){
		printf("Impossivel calcular\n");
	}else{
		r1 = ((b*-1) + sqrt(delta)) / (2.0*a);
		r2 = ((b*-1) - sqrt(delta)) / (2.0*a);
		printf("R1 = %.5lf\n",r1);
		printf("R2 = %.5lf\n",r2);
	}
}
