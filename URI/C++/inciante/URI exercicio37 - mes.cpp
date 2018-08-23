#include<stdio.h>
#include<string.h>
using namespace std;
void meses(int caso){
	char mesStr[30];
	switch(caso){
		case 1: strcpy(mesStr, "January");break;
		case 2: strcpy(mesStr, "February");break;
		case 3: strcpy(mesStr, "March");break;
		case 4: strcpy(mesStr, "April");break;
		case 5: strcpy(mesStr, "May");break;
		case 6: strcpy(mesStr, "June");break;
		case 7: strcpy(mesStr, "July");break;
		case 8: strcpy(mesStr, "August");break;
		case 9: strcpy(mesStr, "September");break;
		case 10: strcpy(mesStr, "October");break;
		case 11: strcpy(mesStr, "November");break;
		case 12: strcpy(mesStr, "December");break;
		
	}
	printf("%s\n",mesStr);
}

int main(){
	int mes;
	scanf("%d",&mes);
	meses(mes);
	
	return 0;
}
