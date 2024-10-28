//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//#
//#
//#########################################

#include <stdio.h>

int main(void) {
	int x;
	int y = 4;
	float salario = 3400.23;
	char sexo = 'M';
	
	fflush(stdin);
	printf("Entre com o valor de y\n");
	scanf("%d", &y);
	
	fflush(stdin);
	printf("Entre com salario\n");
	scanf("%f", &salario);
	
	fflush(stdin);
	printf("Qual o seu sexo (F/M)\n");
	scanf("%c", &sexo);
	
	printf("X, %d\n", x);
	printf("O valor de Y eh: %d\n", y);
	printf("Seu salario sera de: %f\n", salario);
	printf("Sexo: %c\n", sexo);

}

