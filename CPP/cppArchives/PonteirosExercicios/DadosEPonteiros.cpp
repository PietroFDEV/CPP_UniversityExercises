#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    // Aloca as estruturas
    struct Pessoa* pessoa1 = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    struct Pessoa* pessoa2 = (struct Pessoa*)malloc(sizeof(struct Pessoa));

    // Preenche os dados da primeira pessoa
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", pessoa1->nome);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &(pessoa1->idade));

    // Preenche os dados da segunda pessoa
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", pessoa2->nome);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &(pessoa2->idade));

    // Imprime as estruturas (dados e ponteiros)
    printf("\nDados da primeira pessoa:\n");
    printf("Nome: %s\n", pessoa1->nome);
    printf("Idade: %d\n", pessoa1->idade);
    printf("Endereço da struct: %p\n", pessoa1);
    printf("Endereço do nome: %p\n", pessoa1->nome);
    printf("Endereço da idade: %p\n", &(pessoa1->idade));

    printf("\nDados da segunda pessoa:\n");
    printf("Nome: %s\n", pessoa2->nome);
    printf("Idade: %d\n", pessoa2->idade);
    printf("Endereço da struct: %p\n", pessoa2);
    printf("Endereço do nome: %p\n", pessoa2->nome);
    printf("Endereço da idade: %p\n", &(pessoa2->idade));

    // Libera a memória alocada
    free(pessoa1);
    free(pessoa2);

    return 0;
}

