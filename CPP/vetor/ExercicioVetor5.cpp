//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 5 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 5\n\n");
	
	int vetor[10];
	int vetortwo[9];
	int num = 0;
	int numTwo;
	
	for (int x = 0; x <= 10; x++) {
		if (num == 0)
			num = 1;
		else
			num = num *2;
			
		vetor[x] = num;
		
		if (num != 1){
		numTwo = x - 1;
		vetortwo[x] = vetor[x] - vetor[numTwo];
		
		printf("%d\n", vetortwo[x]);
		}
	}
	
	
	
}
