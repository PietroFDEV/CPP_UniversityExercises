//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 6 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 6\n\n");
	
	int vetor[10];
	int num;
	
	printf("Escreva um numero para a quantidade de *\n");
	scanf("%d", &num);
	
	for (int x = 0; x <= num; x++) {
		printf("*");
	}
}

