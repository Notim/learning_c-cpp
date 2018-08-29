#include<stdio.h>
#include<iostream>
using namespace std;	
	int main(){
		int value = 0,cont = 0; 				 		 		
		cin >> cont;
		
		int i;
		if((cont % 2)!=0){
			cont = cont - 1;
		}		
		for(i = 2; i <= cont; i = i + 2){
			cout  <<  i << "^2 = " << (i * i) << endl;	
		}
		return 0;
	}
	
