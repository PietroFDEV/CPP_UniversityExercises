//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 1
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 1\n\n");

	int num1;
	
	do 
	{
		fflush(stdin);
		printf("Ensira o numero 1 para bom dia\n");
		printf("Ensira o numero 2 para boa tarde\n");
		printf("Ensira o numero 3 para boa noite\n");
		scanf("%d", &num1);
		system("CLS");
		
		switch (num1) {
			case 1:
				printf("Bom dia\n\n");
			break;
			case 2:
				printf("Boa tarde\n\n");
			break;
			case 3:
				printf("Boa noite\n\n");
			break;
			default:
				printf("Até mais\n\n");
		}
	}while(num1 != 4);
}
