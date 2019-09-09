//ler 2 numeros inteiros, m e n
//m precisa ser maior que n, m>n
//formula lado1=m²-n²
//lado2 = 2(m*n);
//hipotenusa=m²+n²
// apresentar o resultado 
#include<stdio.h>
int main(){
	int m,n,lado1,lado2,hipotenusa;
	printf("Atribua um valor para N: ");
		scanf("%d",&n);
	printf("Atribua um valor para M, que seja maior que o valor atribuido para N: ");
		scanf("%d",&m);
	lado1=m*m-n*n;
	lado2= 2*(m*n);
	hipotenusa=m*m+n*n;
	printf("O valor do lado 1 e %d, e do lado 2 e %d e a hipotenusa e %d",lado1,lado2,hipotenusa);
	
	
	
	
	
	
	return 0;
}
