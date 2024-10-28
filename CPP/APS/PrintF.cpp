//#########################################
//# Autor: Pietro
//# Exercicio 2
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct ENDC {
	char cidade [50];
	char bairro [20];
	char rua [50];
	int numero;
};

struct ENDR {
	char cidade [50];
	char bairro [20];
	char rua [50];
	int numero;
};

struct CADASTRO {
	char nome [20];
	int idade;
	struct ENDC enderecocomercial;
	struct ENDR enderecoresidencial;
};

int main(void) {
	struct CADASTRO cliente;
	
	//Cadastro
	printf("Ensira o seu nome\n");
	scanf("%s", &cliente.nome);
	printf("\n");
	
	printf("Ensira a sua idade\n");
	scanf("%i", &cliente.idade);
	system("CLS");
	
	//ENDComercial
	printf("Ensira sua cidade comercial\n");
	scanf("%s", &cliente.enderecocomercial.cidade);
	printf("\n");
	
	printf("Ensira o seu bairro comercial\n");
	scanf("%s", &cliente.enderecocomercial.bairro);
	printf("\n");
	
	printf("Ensira a sua rua comercial\n");
	scanf("%s", &cliente.enderecocomercial.rua);
	printf("\n");
	
	printf("Ensira o seu numero comercial\n");
	scanf("%i", &cliente.enderecocomercial.numero);
	system("CLS");
	
	//ENDResidencial
	printf("Ensira sua cidade residencial\n");
	scanf("%s", &cliente.enderecoresidencial.cidade);
	printf("\n");
	
	printf("Ensira o seu bairro residencial\n");
	scanf("%s", &cliente.enderecoresidencial.bairro);
	printf("\n");
	
	printf("Ensira a sua rua residencial\n");
	scanf("%s", &cliente.enderecoresidencial.rua);
	printf("\n");
	
	printf("Ensira o seu numero residencial\n");
	scanf("%i", &cliente.enderecoresidencial.numero);
	system("CLS");
	
	printf("Ola %s que esta com %i anos\n\n", cliente.nome, cliente.idade);
	printf("Seu cadastro foi completado\n\nComercial:\n\nCidade: %s\nBairro: %s\nRua: %s\nNumero: %i", cliente.enderecocomercial.cidade, cliente.enderecocomercial.bairro, cliente.enderecocomercial.rua, cliente.enderecocomercial.numero);
	printf("\n\nResidencial:\n\nCidade: %s\nBairro: %s\nRua: %s\nNumero: %i", cliente.enderecoresidencial.cidade, cliente.enderecoresidencial.bairro, cliente.enderecoresidencial.rua, cliente.enderecoresidencial.numero);
}
