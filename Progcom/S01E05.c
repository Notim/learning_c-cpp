#include<stdio.h>
main(){
	int fat,i;
	printf("digite o numero a fatorar:\n");
	scanf("%d",&fat);
	for(i=fat-1;i!=0;i--){
		fat = fat*i;
	}
	printf("%d",fat);
	getch();
}
