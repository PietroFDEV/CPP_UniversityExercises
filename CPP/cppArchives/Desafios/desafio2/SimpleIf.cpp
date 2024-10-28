//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 1
//#########################################

#include <stdio.h>

int main(void) {
//  1
	printf("Exercicio 1\n\n");

	float num1, num2;
	
		fflush(stdin);
	printf("Entre o 1 numero\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre o 2 numero\n");
	scanf("%f", &num2);

	if(num1 > num2) {
		printf("numero1: %.0f maior que numero2: %.0f", num1, num2);
	} 
}
