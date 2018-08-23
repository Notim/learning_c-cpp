#include<stdio.h>
using namespace std;
int main(){
	int sort[3],rec[3], swap;
	char receive[15];
	
	gets(receive);
	sscanf(receive,"%d %d %d",&sort[0],&sort[1],&sort[2]);
	
	sscanf(receive,"%d %d %d",&rec[0],&rec[1],&rec[2]); 
	
	/*buble sort*/
	int k, j, aux;
    for (k = 1; k < 3; k++) {
        for (j = 0; j < 2; j++) {
            if (sort[j] > sort[j + 1]) {
                aux          = sort[j];
                sort[j]     = sort[j + 1];
                sort[j + 1] = aux;
            }
        }
    }
	printf("%d\n%d\n%d\n",sort[0],sort[1],sort[2]);
	printf("\n%d\n%d\n%d\n",rec[0],rec[1],rec[2]);
	
	return(0);
}
