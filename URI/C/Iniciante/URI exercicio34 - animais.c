#include<stdio.h>
#include<string.h>
main(){
	int value[3];
	char opcao1[25],opcao2[25],opcao3[25];
	scanf("%s %s %s",opcao1,opcao2,opcao3);
	
	if(strcmp(opcao1,"vertebrado")==0){
		if(strcmp(opcao2,"ave")==0){
			if(strcmp(opcao3,"carnivoro")==0){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}	
		}else{
			if(strcmp(opcao3,"onivoro")==0){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}		
		}	
	}else{
		if(strcmp(opcao2,"inseto")==0){
			if(strcmp(opcao3,"hematofago")==0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}	
		}else{
			if(strcmp(opcao3,"hematofago")==0){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}		
		}
	}
}
