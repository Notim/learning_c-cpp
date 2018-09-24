#include<stdio.h>
using namespace std;
int main(){
	int i, seg, rec, time[3];
	
	scanf("%d",&seg);
	rec = seg;
	time[0] = 0;//para seg
	time[1] = 0;//para min
	time[2] = 0;//para hr
	
	while(rec > 3599){time[2] = time[2]+1; rec = rec - 3600;}
	while(rec > 59){time[1] = time[1]+1; rec = rec - 60;}
	while(rec != 0 ){time[0] = time[0]+1; rec = rec - 1;}
	
	printf("%d:%d:%d\n",time[2],time[1],time[0]);
	return(0);
} 
