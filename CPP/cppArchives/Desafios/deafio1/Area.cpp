//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 3
//#########################################

#include <stdio.h>

int main(void) {
// 3
	printf("Exercicio 3\n\n");

	float num1, num2, area;
	
	fflush(stdin);
	printf("Entre com o lado do quadrado 1\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com o lado do quadrado 2\n");
	scanf("%f", &num2);
	
	
	area = num1 * num2;

	printf("A area do quadrado eh:%f\n", area);
}
