//receba um numero 
//mostar msn na tela caso o numero seja maior que 10
#include<stdio.h>
int main (){
	int num;
	printf("Entre com um numero: ");
	scanf("%d",&num);
	if(num>10)
	{
		printf("Seu numero foi %d.",num);
	}else{
		printf("Numero menor que 10");
	}
	return 0;
}
