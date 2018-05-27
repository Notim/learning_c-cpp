#include<stdio.h>
main(){
	double cord[2];
	char receive[20];
	gets(receive);
	
	sscanf(receive,"%lf %lf",&cord[0],&cord[1]);
	
	if((cord[1]==0)&&(cord[0]!=0)){
		printf("Eixo X\n");
	}else if((cord[0]==0)&&(cord[1]!=0)){
		printf("Eixo Y\n");
	}else if((cord[0]==0)&&(cord[1]==0)){
		printf("Origem\n");
	}else if((cord[0]>0)&&(cord[1]>0)){
		printf("Q1\n");
	}else if((cord[0]<0)&&(cord[1]>0)){
		printf("Q2\n");
	}else if((cord[0]<0)&&(cord[1]<0)){
		printf("Q3\n");
	}else if((cord[0]>0)&&(cord[1]<0)){
		printf("Q4\n");
	}
}
