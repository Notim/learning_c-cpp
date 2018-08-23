#include <stdio.h>
using namespace std;
int main(){
	char receive[25];
	int  value[4],count,i,difere;
	
	gets(receive);
	sscanf(receive,"%d %d %d",&value[1],&value[2],&value[3]);
	value[0] = 0;

	for(i = 0;i < 4;i++){	//para passar para ordem crescente	
		if(value[i] > value[i+1]){
				count = value[i];
				value[i]  = value[i+1];
				value[i+1] = count;
				//a posicao de i agora é o menor valor						
		}else;		
	}
	printf("%d eh o maior\n",value[3]);
	return(0);
}
