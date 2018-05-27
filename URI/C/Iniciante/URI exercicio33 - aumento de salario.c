#include<stdio.h>
int main()
{
	int percent;
	double salary,ValueOfFinalSalary;
	scanf("%lf",&salary);
	
	if((salary>0)&&(salary<400.01)){
		percent = 15;
	}
	else if((salary>400)&&(salary<800.01)){
		percent = 12;
	}
	else if((salary>800)&&(salary<1200.01)){
		percent = 10;
	}
	else if((salary>1200)&&(salary<2000.01)){
		percent = 7;
	}
	else if(salary>2000){
		percent = 4;
	}
	ValueOfFinalSalary = (percent/100.0)*salary;
	printf("Novo salario: %.2lf\n",(ValueOfFinalSalary+salary));
	printf("Reajuste ganho: %.2lf\n",(ValueOfFinalSalary));	
	printf("Em percentual: %d %%\n",(percent));
	
		
	return 0;
}
