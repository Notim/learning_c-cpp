#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;	
	int main(){
		int cont = 0;
		cin >> cont;
		int value[cont];
		
		int j;		
		for(j = 0; j < cont; j++){
			cin >> value[j];
		}
		
		int i;		
		for(i = 0; i < cont; i++){
			
			if (value[i] != 0 && (value[i]%2) == 0 ){
				cout  << "EVEN ";
			}else if(value[i] != 0){
				cout  << "ODD ";
			}		
				
			if(value[i] == 0){
				cout  <<  "NULL"  << endl;	
			}			
			if(value[i] < 0){
				cout <<  "NEGATIVE"  << endl;	
			}
			if(value[i] > 0){
				cout << "POSITIVE"  << endl;	
			}	
		}
		return 0;
	}
	
