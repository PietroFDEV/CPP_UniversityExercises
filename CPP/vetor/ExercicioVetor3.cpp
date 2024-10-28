//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 3 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 3\n\n");
	
	int vetor[20];
	int num = -1;
	
	for (int x = 0; x <= 19; x++) {
		if(num != 1)
			num = num + 2;
		else
			num = num - 2;

			
		vetor[x] = num;
		printf("%d\n", vetor[x]);
	}
	
}
