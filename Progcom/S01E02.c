#include <stdio.h>
main(){
	int rec;
	printf("digite um numero:\n");
	scanf("%d",&rec);
	if(rec%2!=0){
		printf("numero Impar\n");
	}else{
		printf("numero Par\n");
	}
	getch();
}
