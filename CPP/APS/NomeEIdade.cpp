//#########################################
//# Autor: Pietro
//# Exercicio 1
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct CLIENTE {
	char nome [20];
	int idade;
};

int main(void) {
	struct CLIENTE cliente;
	
	printf("Ensira o seu nome\n");
	scanf("%s", &cliente.nome);
	system("CLS");
	
	printf("Ensira a sua idade\n");
	scanf("%i", &cliente.idade);
	system("CLS");
	
	printf("Ola %s que esta com a idade de %i\n", cliente.nome, cliente.idade);
}
