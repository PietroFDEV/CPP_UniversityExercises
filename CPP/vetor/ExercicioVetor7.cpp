//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 7 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 7\n\n");
	
	int num, numTwo;
	
	printf("Escreva um numero para a quantidade de *\n");
	scanf("%d", &num);
		
	printf("Escreva um numero para a quantidade de linhas\n");
	scanf("%d", &numTwo);
	
	for(int y = 0; y < numTwo; y++) {
		for (int x = 0; x < num; x++) {
			printf("*");
		}
		printf("\n");
	}
}

