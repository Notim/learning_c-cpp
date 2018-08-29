#include<iostream>

using namespace std;	
	int main(){
		int cont = 0;
		cin >> cont;
		
		int i;		
		for(i = 1; i <= 10; i++){			
			cout << i << " x " << cont << " = " << (cont*i) <<  endl;			
		}
		return 0;
	}
	
