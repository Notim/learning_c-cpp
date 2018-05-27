#include<stdio.h>
void positivos(void);

char main(){
	positivos();
	return 0;
}
void positivos(void){
	int i,contPos=0;
	double value[6];	
	for(i=0;i<6;i++){
		scanf("%lf",&value[i]);
		
		if(value[i]>0){
			contPos++;
		}else;
	}	
	printf("%d valores positivos\n",contPos);
	return;
} 
