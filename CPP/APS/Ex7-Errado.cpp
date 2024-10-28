//#########################################
//# Autor: Pietro
//# Exercicio 7 Struct
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
int numero;
char nome[50];
};

int main(){
	int menuList;
	int numeroCadastro = 0;
	CADASTRO cadastro[5];
	
	while(menuList != 5){
		printf("Bem vindo ao menu do funcionario\n\n");
		
		printf("Seleciona 1 para Cadastrar um novo\n");
		printf("Seleciona 2 para Remover um cadastro\n");
		printf("Seleciona 3 para Buscar um cadastro\n");
		printf("Seleciona 4 para Editar um cadastro\n");
		printf("Seleciona 5 para Sair\n");
		scanf("%i", &menuList);
		system("CLS");
		switch(menuList) {
		case 1:
			if(numeroCadastro <= 5) {
				system("CLS");
			
				printf("Bem vindo ao cadastro do funcionario\n\n");
				printf("Insira o nome do funcionario\n");
				scanf("%s", &cadastro[numeroCadastro].nome);
				system("CLS");
			
				printf("Insira o numero do funcionario\n");
				scanf("%i", &cadastro[numeroCadastro].numero);
				system("CLS");
				
				printf("%s %i", cadastro[numeroCadastro].nome, cadastro[numeroCadastro].numero);
				numeroCadastro = 6;
			}
			else
				printf("Numero de funcionarios excedido\n\n");

		break;
		case 2:
		printf("Remoção de cadastro selecionado\n\n");
			
		break;
		case 3:
		printf("Buscar cadastro selecionado\n\n");
		
		break;
		case 4:
		printf("Editar cadastro selecionado\n\n");
		
		break;
		case 5:
		printf("Adeus\n");
		break;
		default:
		printf("Nada selecionado\n");
		}
	}
}

