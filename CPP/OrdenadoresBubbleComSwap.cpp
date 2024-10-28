#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura de um n? da lista encadeada para o aluno
struct Aluno {
    char nome[50];
    int matricula;
    char turma[10];
    int ano_ingresso;
    struct Aluno* next;
};

// Cabe?alho da lista global
struct Aluno* head = NULL;

// Fun??o para criar um novo n? com os dados do aluno
struct Aluno* createAluno(char nome[], int matricula, char turma[], int ano_ingresso) {
    struct Aluno* novo_aluno = (struct Aluno*)malloc(sizeof(struct Aluno));
    strcpy(novo_aluno->nome, nome);
    novo_aluno->matricula = matricula;
    strcpy(novo_aluno->turma, turma);
    novo_aluno->ano_ingresso = ano_ingresso;
    novo_aluno->next = NULL;
    return novo_aluno;
}

// Fun??o para adicionar um novo aluno ? lista encadeada
void adicionarAluno() {
    char nome[50];
    int matricula;
    char turma[10];
    int ano_ingresso;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a matr?cula do aluno: ");
    scanf("%d", &matricula);
    printf("Digite a turma do aluno: ");
    scanf("%s", turma);
    printf("Digite o ano de ingresso do aluno: ");
    scanf("%d", &ano_ingresso);

    struct Aluno* novo_aluno = createAluno(nome, matricula, turma, ano_ingresso);
    novo_aluno->next = head;
    head = novo_aluno;
}

// Fun??o para trocar os endere?os dos n?s
void swapNodes(struct Aluno* node1, struct Aluno* node2) {
    if (node1 == node2) return;

    struct Aluno *prev1 = NULL, *prev2 = NULL, *curr = head;

    while (curr && curr != node1) {
        prev1 = curr;
        curr = curr->next;
    }

    curr = head;
    while (curr && curr != node2) {
        prev2 = curr;
        curr = curr->next;
    }

    if (!node1 || !node2) return;

    if (prev1)
        prev1->next = node2;
    else
        head = node2;

    if (prev2)
        prev2->next = node1;
    else
        head = node1;

    struct Aluno* temp = node1->next;
    node1->next = node2->next;
    node2->next = temp;
}

// Fun??o para ordenar a lista usando Bubble Sort
void bubbleSort() {
    int trocado;
    struct Aluno *p1, *p2 = NULL;

    if (head == NULL)
        return;

    do {
        trocado = 0;
        p1 = head;

        while (p1->next != p2) {
            if (p1->matricula > p1->next->matricula) {
                swapNodes(p1, p1->next);
                trocado = 1;
            }
            p1 = p1->next;
        }
        p2 = p1;
    } while (trocado);
}

// Fun??o para exibir os dados dos alunos na lista
void exibirAlunos() {
    struct Aluno* temp = head;
    while (temp != NULL) {
        printf("Nome: %s\n", temp->nome);
        printf("Matr?cula: %d\n", temp->matricula);
        printf("Turma: %s\n", temp->turma);
        printf("Ano de Ingresso: %d\n", temp->ano_ingresso);
        printf("\n");
        temp = temp->next;
    }
}

// Fun??o para liberar a mem?ria alocada para a lista encadeada
void liberarLista() {
    struct Aluno* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int escolha, num_alunos, i;

    while (1) {
        printf("Menu:\n");
        printf("1. Adicionar aluno\n");
        printf("2. Exibir alunos\n");
        printf("3. Ordenar alunos por matr?cula\n");
        printf("4. Sair\n");
        printf("Escolha uma op??o: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Quantos alunos voc? deseja cadastrar? ");
                scanf("%d", &num_alunos);
                for (i = 0; i < num_alunos; i++) {
                    printf("Cadastro do aluno %d:\n", i + 1);
                    adicionarAluno();
                }
                break;
            case 2:
                printf("\nAlunos cadastrados:\n");
                exibirAlunos();
                break;
            case 3:
                bubbleSort();
                printf("\nLista ordenada por matr?cula:\n");
                exibirAlunos();
                break;
            case 4:
                liberarLista();
                exit(0);
            default:
                printf("Op??o inv?lida. Tente novamente.\n");
        }
    }

    return 0;
}

