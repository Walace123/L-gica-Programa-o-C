//ler um time de futebol
//ler numeros de vitoria
//ler numero de empates
//ler numero de derrotas
#include<stdio.h>
int main(){
	char nomeTime[100];
	int vitorias,empates,derrotas,total,totalPontos;
	printf("Entre com nome de seu time: ");
		scanf("%s",nomeTime);
	printf("\nQuantas vitorias tem seu time? ");
		scanf("%d",&vitorias);
	printf("\nQuantos empates tem seu time? ");
		scanf("%d",&empates);
	printf("\nQuantas derrotas tem seu time? ");
		scanf("%d",&derrotas);
	vitorias=vitorias*3;
	empates=empates*1;
	totalPontos=vitorias+empates;
	printf("\nSeu time,%s, tem %d pontos",nomeTime,totalPontos);
	return 0;
}
