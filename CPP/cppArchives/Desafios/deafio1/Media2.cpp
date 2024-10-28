//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//#
//#
//#########################################

#include <stdio.h>

int main(void) {
	float nota1, nota2;
	
	fflush(stdin);
	printf("Entre com a nota 1\n");
	scanf("%f", &nota1);
	
	fflush(stdin);
	printf("Entre com a nota 2\n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("A media eh: %.1f\n", media); //%.if, casa decimais
}
