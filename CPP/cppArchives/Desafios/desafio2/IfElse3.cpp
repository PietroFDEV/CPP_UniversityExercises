//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 4
//#########################################

#include <stdio.h>

int main(void) {
//  4
	printf("Exercicio 4\n\n");

	float nota1, nota2, nota3, nota4, media;
	
	fflush(stdin);
	printf("Entre com a nota 1\n");
	scanf("%f", &nota1);
	
	fflush(stdin);
	printf("Entre com a nota 2\n");
	scanf("%f", &nota2);
	
	fflush(stdin);
	printf("Entre com a nota 3\n");
	scanf("%f", &nota3);
	
	fflush(stdin);
	printf("Entre com a nota 4\n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;	

	if(media <= 3) {
		printf("Reprovou com nota: %f", media);
	} else if(media <= 7) {
		printf("Ficou de exame com nota: %f", media);
	} else {
		printf("Passou por media com nota: %f", media);
	}
}
