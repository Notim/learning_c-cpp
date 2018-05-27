#include<stdio.h>

double show(double somatoria,int caso){
	switch (caso){
		case 0 :
			printf("R$ %.2lf\n",somatoria);
		break;
		case 1 :
			printf("Isento\n");
		break;		
	}
	
	return;
}

int main(){
	double somatoria, salario, salarioFinal;
	scanf("%lf",&salario);
	/*
		0 ate 2000 = 0
		2000.01 ate 3000 = 80
		3000.01 ate 4500 = 270 + 80 => 350
		acima de 4500    = 270 + 80 + resto
	*/
	if(salario < 2000.01){
		show(0,1);
	}else if(salario < 3000.01){
		salario = salario - 2000;
		salarioFinal = 0.08 * salario;
		show(salarioFinal,0);
				
	}else if(salario < 4500.01){
		salario = salario - 3000;
		salarioFinal = 80 + (0.18 * salario);
		show(salarioFinal,0);
				
	}else if(salario > 4500){
		salario = salario - 4500;
		salarioFinal = 80 + 270 + (0.28 * salario);
		show(salarioFinal,0);		
	}
	
	return 0;
}
