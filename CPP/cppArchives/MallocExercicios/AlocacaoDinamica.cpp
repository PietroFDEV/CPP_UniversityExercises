//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 2
//#########################################

#include <stdio.h>

#include <conio.h>

#include <windows.h>

#include <locale.h>



struct PESSOA

{

char nome[20];

int telefone;

};

int main()

{
struct PESSOA *dinamico; // alocação dinâmica


dinamico= (struct PESSOA*) malloc(sizeof(struct PESSOA));

dinamico->telefone=22;

strcpy(dinamico->nome,"Rua B");

printf("End. Dinâmico : %s, %d\n", dinamico->nome, dinamico->telefone);



free(dinamico);



getch();

return 0;

}
