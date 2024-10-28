//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 10 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 10\n\n");
	
	int num = 0;
	int numTwo = 0;
		
	for (int y = 1;y < 6; y++){
		numTwo = 0;
		for(int x = 1;x < 7; x++)
		{
			num = num + 1;
			printf("%d ", num);
		}
		printf("\n");
	}
}


