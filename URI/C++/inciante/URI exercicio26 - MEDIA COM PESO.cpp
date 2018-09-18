#include<stdio.h>
using namespace std;
int main(){
	double notas[4],media,prova,mediaCpro;
	char receive[20];
	gets(receive);
	sscanf(receive,"%lf %lf %lf %lf",&notas[0],&notas[1],&notas[2],&notas[3]);
	
	media = (((notas[0]*2) + (notas[1] * 3) + (notas[2]*4) + notas[3]) / 10);
	
	printf("Media: %.1lf\n",media);
	
	if((media>=5)&&(media<7)){
		
		printf("Aluno em exame.\n");
		scanf("%lf",&prova);
		printf("Nota do exame: %.1lf\n",prova);
		mediaCpro = (media + prova) / 2;
		if(mediaCpro>=5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n",mediaCpro);
		
	}else if(media>=7){
		printf("Aluno aprovado.\n");
	}else if(media<5){
		printf("Aluno reprovado.\n");
	}else;
	
	return(0);
}
