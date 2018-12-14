#include<stdio.h>
#include<iostream>
using namespace std;
	class Program{
		private:
			int number1;
			int number2;		
			int qtdImpares;
		
		public:	
			void info (); 
			int qtdImparesF(int valor1,int valor2){
				int a = valor1 
					,b = valor2
					,cont = 0
					,swap = 0
					,response = 0;
											
				if (a > b){
					swap = a;
					a = b;
					b = swap;
				}
				for(cont = a+1; cont < b; cont++){
					if((cont%2) != 0){
						response = response + cont;
					}					
				}						
				return response;
			}			
    };
    void Program::info(){
    	std::cout << ("Impares concecutivos - v0.1\nmaked with S2 by Notim\nUri exercise with C++!\n\n");
	}	
	int main(){
		Program Prg; 
		int value1, value2; 
		
		//Prg.info();		
		cin >> value1 >> value2;			
		int response = Prg.qtdImparesF(value1, value2);
		
		std::cout << response << endl;
				
		return 0;
	}
