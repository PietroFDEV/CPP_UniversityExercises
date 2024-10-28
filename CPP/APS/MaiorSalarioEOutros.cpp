//#########################################
//# Autor: Pietro
//# Exercicio 6
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct FUNC {
	char nome[50];
	char cargo[20];
	int telefone;
	char email[50];
	int salario;
};

int main(void) {
	struct FUNC funcionario[5];
	int somaSalarios = 0;
	int maiorSalario = 0;
	int indiceMaiorSalario;
	
	for(int x = 0;x < 5;x++){
		printf("Ensira o nome do funcionario:%i\n", (x + 1));
		scanf("%s", &funcionario[x].nome);
		system("CLS");
		
		printf("Ensira o cargo do funcionario: %i\n", (x + 1));
		scanf("%s", &funcionario[x].cargo);
		system("CLS");
		
		printf("Ensira o telefone do funcionario: %i\n", (x + 1));
		scanf("%i", &funcionario[x].telefone);
		system("CLS");
		
		printf("Ensira o email do funcionario: %i\n", (x + 1));
		scanf("%s", &funcionario[x].email);
		system("CLS");
		
		printf("Ensira o salario do funcionario: %i\n", (x + 1));
		scanf("%i", &funcionario[x].salario);
		system("CLS");
	}
	
	for(int x = 0;x < 5;x++){
		somaSalarios = somaSalarios + funcionario[x].salario;
	}
	
	printf("Soma dos salarios: %i\n", somaSalarios);
	
	for(int x = 0;x < 5;x++){
		if(funcionario[x].salario > maiorSalario){
			maiorSalario = funcionario[x].salario;
			indiceMaiorSalario = x;
		}
	}
	
	printf("Maior salario: %i, do funcionario: %s\n", funcionario[indiceMaiorSalario].salario, funcionario[indiceMaiorSalario].nome);
	
	for(int x = 0;x < 5;x++){
		if(funcionario[x].telefone == '-1')
			printf("Funcionario %s, esta com telefone vazio", funcionario[x].nome);
	}
	
}
