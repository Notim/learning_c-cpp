#include<stdio.h>
#include<iostream>
using namespace std;
	class Program{
		private:
			int number1;
			int number2;			
		
		public:
			int qtdImpares;
				
			void info (); 
			void setNumber1 (int value);
			void setNumber2 (int value);
			
			int qtdImparesF(){
				int a = this->number1
					,b = this->number2
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
	void Program::setNumber1(int value){
   		Program::number1 = value;	
	}
	void Program::setNumber2(int value){
   		Program::number2 = value;	
	}	
	
	
	
	int main(){
		Program Prg; 
		int value1, value2; 
		
		cin >> value1 >> value2;
		Prg.setNumber1(value1);
		Prg.setNumber2(value2);					
		int response = Prg.qtdImparesF();
		
		std::cout << response << endl;
				
		return 0;
	}
	
