//#########################################
//# Autor: Pietro
//# Exercicio 4
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct CORRESPONDENCIA {
	int cep;
	char rua [50];
	int numero;
	char bairro [50];
	char cidade [50];
	char estado [50];
};

int main(void) {
	struct CORRESPONDENCIA A, B;
	
	printf("Ensira o cep da correspondencia\n");
	scanf("%i", &A.cep);
	system("CLS");
	
	printf("Ensira o estado da correspondencia\n");
	scanf("%s", &A.estado);
	system("CLS");
	
	printf("Ensira a cidade da correspondencia\n");
	scanf("%s", &A.cidade);
	system("CLS");
	
	printf("Ensira o bairro da correspondencia\n");
	scanf("%s", &A.bairro);
	system("CLS");
	
	printf("Ensira a rua da correspondencia\n");
	scanf("%s", &A.rua);
	system("CLS");
	
	printf("Ensira o numero da correspondencia\n");
	scanf("%i", &A.numero);
	system("CLS");
	
	B=A;
	
	printf("Correspondencia B\n\nCEP: %i\nEstado: %s\nCidade: %s\nBairro: %s\nRua: %s\nNumero: %i", B.cep, B.estado, B.cidade, B.bairro, B.rua, B.numero);
}
