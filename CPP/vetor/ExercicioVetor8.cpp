//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 8 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 8\n\n");
	
	int num, numTwo = 0;
	
	printf("Escreva um numero para a quantidade de *\n");
	scanf("%d", &num);
		
	do 
	{
		numTwo = numTwo + 1;
		for(int x = 0;x < numTwo; x++)
		{
			printf("*");
		}
		printf("\n");

	}while(numTwo < num);
}

