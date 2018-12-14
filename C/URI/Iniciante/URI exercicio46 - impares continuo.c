/*
    author: Joao vitor paulino martins
 */

#include<stdio.h>

int main(void)
{
	int A,B,i,sum = 0,swap;
	scanf("%d",&A);
	scanf("%d",&B);
	
	if(A > B)
	{
		swap = A;
		A    = B;
		B    = swap; 
	}
	
	for(i=A;i!=B;i++)
	{
		if(i%2!=0)
		{
			sum = (i + sum) * 1;
			printf("%d\n",sum);
		}else;
	}
	printf("%d",sum);
	
	return 0;	
}
