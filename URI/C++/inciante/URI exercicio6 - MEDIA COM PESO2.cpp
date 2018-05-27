#include<iomanip>
#include<iostream>
using namespace std;
main(){
	double a, b, c, media;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	media =((a*2)+(b*3)+(c*5))/10;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<"MEDIA = "<<media<<endl;

}
