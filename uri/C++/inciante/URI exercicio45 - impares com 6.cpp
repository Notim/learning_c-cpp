#include<stdio.h>
using namespace std;
int main(){
	int i, cont;
	scanf("%d",&cont);
	
	for(i=cont;i<=(cont+12);i++){
		if((i%2)==1){
			printf("%d\n",i);
		}else;
	}
	
	return 0;
}
