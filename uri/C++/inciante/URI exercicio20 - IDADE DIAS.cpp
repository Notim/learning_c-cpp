#include<stdio.h>
using namespace std;
int main(){
	int  dia, rec, time[3];
	
	scanf("%d",&dia);
	rec = dia;
	time[0] = 0;//para seg
	time[1] = 0;//para min
	time[2] = 0;//para hr
	
	while(rec > 364 ){time[2] = time[2]+1; rec = rec - 365 ;}
	while(rec > 29){time[1] = time[1]+1; rec = rec - 30;}
	while(rec != 0 ){time[0] = time[0]+1; rec = rec - 1;}
	
	
	/*		
	1 ano(s)
	1 mes(es)
	5 dia(s)
	*/
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",time[2],time[1],time[0]);
	return(0);
} 
