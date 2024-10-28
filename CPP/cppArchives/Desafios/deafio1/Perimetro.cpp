//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 4
//#########################################

#include <stdio.h>

int main(void) {
// 4
	printf("Exercicio 4\n\n");

	float num1, num2, perimetro;
	
	fflush(stdin);
	printf("Entre com o lado do quadrado 1\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com o lado do quadrado 2\n");
	scanf("%f", &num2);
	
	
	perimetro = (num1 * 2) + (num2 * 2);

	printf("A perimetro do quadrado eh:%f\n", perimetro);
}
