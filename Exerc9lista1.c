//receba o nome e idade de 5 
//informe quantos acima de 18 anos
#include<stdio.h>
int main(){
	int idade,i,qnt=0;
	char nome[20];
	for(i=0;i<5;i++){
		printf("Entre com seu nome: ");
		scanf("%s",&nome);
		printf("Entre com sua idade nome: ");
		scanf("%d",&idade);	
		if(idade>=18){
		qnt++;
	}
	
	}
	printf("%d tem acima de 18",qnt);
	
	return 0;
}
