#include<iostream>
#include <iomanip>
using namespace std;
main(){
	double A,B,media;
	
	cin>>A;
	cin>>B;
	media = (((A*3.5)+(B*7.5)) /11);
	cout<<setiosflags(ios::fixed)/*manter a primeira casa*/<<"MEDIA = "<<setprecision(5)/*para apos a virgula*/<<media<<endl;

	
}
