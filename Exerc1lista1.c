// programa que receba 3 notas
//calcule
//faça a media
//monstre o resultado

#include<stdio.h>
int main(){
	float nota1,nota2,nota3,media;
	printf("Entre com a nota 1:\n");
	scanf("%f",&nota1);
	printf("Entre com a nota 2:\n");
	scanf("%f",&nota2);
	printf("Entre com a nota 3:\n");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
	printf("A media das notas e:%2.f",media);
	
	return 0;
}
