//#########################################
//# Autor: Pietro
//# Exercicio 5
//#########################################

#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
	char nome[50];
	int idade;
};

int main(void) {
	struct CADASTRO cliente[5];
	int maiorIdade = 0;
	
	for(int x = 0;x < 5;x++){
		printf("Ensira o nome %i\n", (x + 1));
		scanf("%s", &cliente[x].nome);
		system("CLS");
		
		printf("Ensira a idade %i\n", (x + 1));
		scanf("%i", &cliente[x].idade);
		system("CLS");
	}
	
	for(int x = 0;x < 5;x++){
		if(cliente[x].idade > maiorIdade){
			maiorIdade = cliente[x].idade;
		}
	}
	printf("A maior iddade e %i anos",  maiorIdade);
}
