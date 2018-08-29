#include<iostream>
#include <iomanip>
using namespace std;	
	int main(){
		int cont;
		cin >> cont;
		
		double pond[] = {2.0,3.0,5.0}, vector[cont][4];
		
		int index;
		for(index = 0; index < cont; index++){
			
			int position;
			for(position = 0; position < 3; position++){
				cin >> vector[index][position];
				vector[index][3] += (vector[index][position] * pond[position]);
			}			
			vector[index][3] = (vector[index][3] / (pond[0] + pond[1] + pond[2])) ;
			
			std::cout << std::fixed << std::setprecision(1) << vector[index][3] << std::endl;
  		}
		return 0;
	}
	
	
