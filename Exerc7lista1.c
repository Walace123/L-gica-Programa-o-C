//Programa que receba um numero
//dizer se esta entre 100 e 200
#include<stdio.h>
int main(){
	int num;
	printf("Entre com um numero: ");
	scanf("%d",&num);
	if(num>=100&&num<=200){
		printf("\nEste numero,%d, esta entre 100 e 200",num);
	}
	else{
		printf("\nEste numero nao esta entre 100 e 200");
	}
	return 0;
}
