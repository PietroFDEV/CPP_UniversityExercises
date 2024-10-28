//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 9 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 9\n\n");
	
	int num = 0;
	int numTwo = 0;
		
	for (int y = 1;y < 11; y++){
		numTwo = 0;
		for(int x = 1;x < 11; x++)
		{
			numTwo = numTwo + 1;
			num = y * numTwo;
			printf("%dx%d = %d\n", y, numTwo, num);
		}
		printf("\n");
	}
}


