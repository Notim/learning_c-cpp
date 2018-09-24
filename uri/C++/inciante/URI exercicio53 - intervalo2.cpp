#include<stdio.h>
#include<iostream>
using namespace std;
	
	int main(){				
		int cont = 0, in = 0, out = 0 , range1 = 10, range2 = 20;		
		cin >>  cont;
		int array[cont];
		
		
		int i;
		for(i = 0; i < cont ;i++){
			cin >> array[i];
			if(array[i] < range1 || array[i] > range2 ){
				out++;
			}else{
				in++;
			}			
		}
				 
		cout  << in << " in" << endl ;
		cout  << out << " out" << endl ;		
		
		return 0;
	}
	
