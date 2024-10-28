//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 2
//#########################################

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  1
	printf("Exercicio 2\n\n");

	int num1, num2, resultado, choice;
	
	fflush(stdin);
	printf("Ensira o numero 1\n");
	scanf("%d", &num1);
	system("CLS");
	printf("Ensira o numero 2\n");
	scanf("%d", &num2);
	system("CLS");

	fflush(stdin);
	printf("Ensira o numero 1 para somar\n");
	printf("Ensira o numero 2 para subtrair\n");
	printf("Ensira o numero 3 para multiplicar\n");
	printf("Ensira o numero 3 para dividir\n");
	scanf("%d", &choice);
	system("CLS");
	
	switch (choice) {
		case 1:
			resultado = num1 + num2;
			printf("Soma: %d\n\n", resultado);
		break;
		case 2:
			resultado = num1 - num2;
			printf("Subtracao: %d\n\n", resultado);		
		break;
		case 3:
			resultado = num1 * num2;
			printf("Multiplicacao: %d\n\n", resultado);		
		break;
		case 4:
			resultado = num1 / num2;
			printf("Divisao: %d\n\n", resultado);
		break;
		default:
			printf("Nada informado\n\n");
	}

}
