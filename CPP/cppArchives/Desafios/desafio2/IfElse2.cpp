//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 3
//#########################################

#include <stdio.h>

int main(void) {
//  3
	printf("Exercicio 3\n\n");

	float num1;
	
		fflush(stdin);
	printf("Informe o estado da agua\n");
	scanf("%f", &num1);
	

	if(num1 <= 10) {
		printf("A agua esta congelada");
	} else if(num1 <= 100) {
		printf("A agua esta liquida");
	} else {
		printf("A agua esta gasosa");
	}
}
