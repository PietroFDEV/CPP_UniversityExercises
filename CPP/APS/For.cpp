//#########################################
//# Autor: Pietro
//# Exercicio 3
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
	struct CADASTRO cliente[5];
	
	for(int x = 0;x < 5;x++){	
		//Cadastro
		printf("Ensira o seu nome\n");
		scanf("%s", &cliente[x].nome);
		printf("\n");
		
		printf("Ensira a sua idade\n");
		scanf("%i", &cliente[x].idade);
		system("CLS");
		
		//ENDComercial
		printf("Ensira sua cidade comercial\n");
		scanf("%s", &cliente[x].enderecocomercial.cidade);
		printf("\n");
		
		printf("Ensira o seu bairro comercial\n");
		scanf("%s", &cliente[x].enderecocomercial.bairro);
		printf("\n");
		
		printf("Ensira a sua rua comercial\n");
		scanf("%s", &cliente[x].enderecocomercial.rua);
		printf("\n");
		
		printf("Ensira o seu numero comercial\n");
		scanf("%i", &cliente[x].enderecocomercial.numero);
		system("CLS");
		
		//ENDResidencial
		printf("Ensira sua cidade residencial\n");
		scanf("%s", &cliente[x].enderecoresidencial.cidade);
		printf("\n");
		
		printf("Ensira o seu bairro residencial\n");
		scanf("%s", &cliente[x].enderecoresidencial.bairro);
		printf("\n");
		
		printf("Ensira a sua rua residencial\n");
		scanf("%s", &cliente[x].enderecoresidencial.rua);
		printf("\n");
		
		printf("Ensira o seu numero residencial\n");
		scanf("%i", &cliente[x].enderecoresidencial.numero);
		system("CLS");
	}
	

	for(int x = 0;x < 5;x++){	

		printf("Ola %s que esta com %i anos\n\n", cliente[x].nome, cliente[x].idade);
		printf("Seu cadastro foi completado\n\nComercial:\n\nCidade: %s\nBairro: %s\nRua: %s\nNumero: %i", cliente[x].enderecocomercial.cidade, cliente[x].enderecocomercial.bairro, cliente[x].enderecocomercial.rua, cliente[x].enderecocomercial.numero);
		printf("\n\nResidencial:\n\nCidade: %s\nBairro: %s\nRua: %s\nNumero: %i", cliente[x].enderecoresidencial.cidade, cliente[x].enderecoresidencial.bairro, cliente[x].enderecoresidencial.rua, cliente[x].enderecoresidencial.numero);
	}
}
