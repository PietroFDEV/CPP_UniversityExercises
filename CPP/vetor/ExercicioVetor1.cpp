//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 1 vetor
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 1\n\n");
	
	int arrOne[5];
	int arrTwo[5];
	int arrThree[5];
	int count, choice, num;
	
	for (int x = 0; x <= 4; x++) {
		printf("Escreva 1 numero\n");
		scanf("%d", &num);
		arrOne[x] = num;
		printf("%d\n", arrOne[x]);
		system("CLS");
	}
	for (int x = 0; x <= 4; x++) {
		printf("Escreva 1 numero\n");
		scanf("%d", &num);
		arrTwo[x] = num;
		printf("%d\n", arrTwo[x]);
		system("CLS");
	}
	
		fflush(stdin);
	printf("Ensira o numero 1 para somar\n");
	printf("Ensira o numero 2 para subtrair\n");
	printf("Ensira o numero 3 para multiplicar\n");
	printf("Ensira o numero 3 para dividir\n");
	scanf("%d", &choice);
	system("CLS");
	
	switch (choice) {
		case 1:
			for (int x = 0; x <= 4; x++) {
				arrThree[x] = arrOne[x] + arrTwo[x];
				printf("Soma: %d\n", arrThree[x]);
			}	
		break;
		case 2:
			for (int x = 0; x <= 4; x++) {
				arrThree[x] = arrOne[x] - arrTwo[x];
				printf("Subtracao: %d\n", arrThree[x]);
			}
		break;
		case 3:
			for (int x = 0; x <= 4; x++) {
				arrThree[x] = arrOne[x] * arrTwo[x];
				printf("Multiplicacao: %d\n", arrThree[x]);
			}	
		break;
		case 4:
			for (int x = 0; x <= 4; x++) {
				arrThree[x] = arrOne[x] / arrTwo[x];
				printf("Divisao: %d\n", arrThree[x]);
			}
		break;
		default:
			printf("Nada informado\n\n");
	}
	
}
