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
    struct Pessoa* pessoa3 = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    struct Pessoa* pessoa4 = (struct Pessoa*)malloc(sizeof(struct Pessoa));

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

    // Preenche os dados da terceira pessoa
    printf("Digite o nome da terceira pessoa: ");
    scanf("%s", pessoa3->nome);
    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &(pessoa3->idade));

    // Preenche os dados da quarta pessoa
    printf("Digite o nome da quarta pessoa: ");
    scanf("%s", pessoa4->nome);
    printf("Digite a idade da quarta pessoa: ");
    scanf("%d", &(pessoa4->idade));

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

    printf("\nDados da terceira pessoa:\n");
    printf("Nome: %s\n", pessoa3->nome);
    printf("Idade: %d\n", pessoa3->idade);
    printf("Endereço da struct: %p\n", pessoa3);
    printf("Endereço do nome: %p\n", pessoa3->nome);
    printf("Endereço da idade: %p\n", &(pessoa3->idade));

    printf("\nDados da quarta pessoa:\n");
    printf("Nome: %s\n", pessoa4->nome);
    printf("Idade: %d\n", pessoa4->idade);
    printf("Endereço da struct: %p\n", pessoa4);
    printf("Endereço do nome: %p\n", pessoa4->nome);
    printf("Endereço da idade: %p\n", &(pessoa4->idade));

    // Libera a memória alocada
    free(pessoa1);
    free(pessoa2);
    free(pessoa3);
    free(pessoa4);

    return 0;
}

