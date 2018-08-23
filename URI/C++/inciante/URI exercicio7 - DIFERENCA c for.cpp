#include<stdio.h>
using namespace std;
int main(){
	int a[4],i, diferenca;
	
	for(i = 0;i < 4;i++){
		scanf("%d",&a[i]);
	}
	
	diferenca = (a[0]*a[1]) - (a[2]*a[3]);
	
	printf("DIFERENCA = %d\n",diferenca);
	return(0);
}
