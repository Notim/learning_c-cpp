#include<stdio.h>
using namespace std;

void positivos(void);
int main(){
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
} 
