#include<stdio.h>
using namespace std;

void pares(void);

int main(){
	pares();
	return 0;
}
void pares(void){
	int i;
	for(i = 2; i <= 100; i = i+2){
		printf("%d\n",i);	
	}	
} 
