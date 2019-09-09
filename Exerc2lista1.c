//receber o salario de um funcionario
//aumentar salario em 25%
//mostrar o novo salario
#include<stdio.h>
int main(){
	float salario,novoSalario;
	printf("Entre com seu salario:\n");
	scanf("%f",&salario);
	novoSalario=salario*0.25;
	printf("Seu novo salario e %2.f",salario+novoSalario);
	return 0;
}
