//receba valor para a,b,c
#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,c,delta,X1,X2;
	printf("Entre com valor para A: ");
		scanf("%f",&a);
	printf("Entre com valor para B: ");
		scanf("%f",&b);
	printf("Entre com valor para C: ");
		scanf("%f",&c);
//atribuir valor para delta e x1 e x2
delta= b*b-4*(a*c);

	printf("O valor de delta e %2.f\n",delta);
	
X1=((-b)+sqrt(delta))/(2*a);

	printf("O valor de X1 e %2.f\n",X1);
	
X2=((-b)-sqrt(delta))/(2*a);

	printf("O valor de X2 e %2.f",X2);
	
return 0;
}
