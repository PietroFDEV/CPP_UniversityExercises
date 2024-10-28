//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 2 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 2\n\n");
	
	int vetor[20];
	int num = 0;
	
	for (int x = 0; x <= 19; x++) {
		num = num + 2;
		vetor[x] = num;
		printf("%d\n", vetor[x]);
	}
	
}
