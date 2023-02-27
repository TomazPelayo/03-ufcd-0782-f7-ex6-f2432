// Escreva o seu código a seguir

#include<stdio.h>

int main() {
	
	float n1, n2, n3, res; // n1 para o produto, n2 para o lucro, n3 para o iva e res para o resultado
	float tmp;
	
	printf("Qual é o valor do produto: \n"); // escrever texto
	scanf("%f",&n1); // ler o valor do produto
	printf("Qual é o lucro que se quer ter: \n"); // escrever texto
	scanf("%f",&n2); // ler o lucro do produto	
	printf("Valor do iva:"); // escrever texto
	scanf("%f",&n3); // ler o iva do produto
	tmp = (n3/100)+1;
	res = (n1+n2)*tmp;
	printf("O valor do produto final é %.2f Euros. \n",res); // escrever resultado
	getchar();
	getchar();
	return(0);
}
