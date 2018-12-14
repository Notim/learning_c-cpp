#include<stdio.h>
using namespace std;
int main(){
	int i, cont;
	scanf("%d",&cont);
	
	for(i=1;i<=cont;i++){
		if((i%2)==1){
			printf("%d\n",i);
		}else;
	}
	
	return 0;
}
