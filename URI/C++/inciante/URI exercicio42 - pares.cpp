#include<stdio.h>
using namespace std;
int main(){
	int i, values[5], countP=0;
	for(i=0;i<5;i++){
		scanf("%d",&values[i]);
		if(((values[i]*1)%2)==0){
			countP++;
		}
	}
	printf("%d valores pares\n",countP);
	
	return 0;	
}
