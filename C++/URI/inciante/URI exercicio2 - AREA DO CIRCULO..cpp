#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    /*area = p . raio2. Considerando para este problema que p = 3.14159:*/
	double raio ,area;
	cin>>raio;
	area = 3.14159 * (raio*raio);
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<"A="<< area << endl;
	
    return 0;
}

