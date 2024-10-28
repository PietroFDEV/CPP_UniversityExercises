#include <stdio.h>
#include <stdlib.h>
struct CADASTRO {
int numero;
};

int main()
{
	int numeroCadastro = 0;
	int numeroTotal = 0;
	int numeroEscolhido;
	struct CADASTRO cadastro[5];
	
	for(int x = 1;x <= 5;x++){
		cadastro[x].numero = (x + 5);
		printf("%i", cadastro[x].numero);
		numeroCadastro = x;
	}
	
	printf("Escolha 1 dos cadastros");
	numeroTotal = numeroCadastro;
	while(numeroCadastro != 0){
		printf("%i %i\n", numeroCadastro, cadastro[numeroCadastro].numero);
		numeroCadastro--;
	}
	
	printf("Qual vc quer apagar?");
	scanf("%i", &numeroEscolhido);
	
	printf("Voce esta deletando agora o numero %i", cadastro[numeroEscolhido].numero);
	
	//cadastro[numeroEscolhido].numero = '';
	
	printf("Voce esta deletando agora o numero %i", cadastro[numeroEscolhido].numero);
	
	printf("%i", numeroTotal);
	numeroCadastro = numeroTotal;
	printf("%i", numeroCadastro);
	
	


}
