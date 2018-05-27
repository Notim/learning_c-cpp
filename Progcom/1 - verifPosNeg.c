  #include<stdio.h>
  
  main(){
  	int a ;
  	
  	printf("-----------------------------------------------------\n");
	printf("++      FACULDADE DE TECNOLOGIA DE SAO PAULO       ++\n");
	printf("-----------------------------------------------------\n");
  	
  	printf("digite um numero inteiro para verificar se ele é positivo ou negativo\n");  	
  	scanf("%d",&a);
  	
	if(a > 0){
		printf("numero positivo",0);
	}else{
		printf("numero negativo",0);
	}
	getch();
  }
