//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 1
//#########################################

#include <stdio.h>

int main(void) {
// 1
	printf("Exercicio 1\n\n");

	float num1, num2, soma, subtracao;
	
	fflush(stdin);
	printf("Entre com o numero 1\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com o numero 2\n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	subtracao = num1 - num2;

	printf("A soma dos numeros eh:%f\n", soma);
	printf("A subtracao dos numeros eh:%f\n", subtracao);

}
