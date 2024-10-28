//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 5
//#########################################

#include <stdio.h>

int main(void) {
// 5
	printf("Exercicio 5\n\n");

	float num1, num2, area;
	
	fflush(stdin);
	printf("Entre com a base do triangulo\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com a altura do triangulo\n");
	scanf("%f", &num2);
	
	
	area = (num1 * num2)/2;

	printf("A area do triangulo eh:%f\n", area);
}
