#include<iostream>

using namespace std;	
	int main(){
		int cont = 0;
		cin >> cont;
		
		int i;		
		for(i = 0; i <= 10000; i++){
			if((i % cont) == 2){
				cout << i << endl;
			}
		}
		return 0;
	}
	
