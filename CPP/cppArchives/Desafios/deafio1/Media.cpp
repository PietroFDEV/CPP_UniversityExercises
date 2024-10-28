//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 2
//#########################################

#include <stdio.h>

int main(void) {
// 2
	printf("Exercicio 2\n\n");

	float num1, num2, num3, num4, media;
	
	fflush(stdin);
	printf("Entre com o numero 1\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com o numero 2\n");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("Entre com o numero 3\n");
	scanf("%f", &num3);
	
	fflush(stdin);
	printf("Entre com o numero 4\n");
	scanf("%f", &num4);
	
	media = (num1 + num2 + num3 + num4)/4;

	printf("A media dos numeros eh:%f\n", media);
}
