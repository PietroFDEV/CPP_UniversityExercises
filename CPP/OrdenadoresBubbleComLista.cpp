#include <stdio.h>
#include <stdlib.h>

// Estrutura de um n? da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fun??o para criar um novo n?
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fun??o para adicionar um n? no in?cio da lista
void push(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Fun??o para exibir a lista
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Fun??o para trocar os valores de dois n?s
void swap(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Fun??o para ordenar a lista usando Bubble Sort
void bubbleSort(Node* head) {
    int trocado;
    Node* atual;
    Node* anterior = NULL;

    if (head == NULL)
        return;

    do {
        trocado = 0;
        atual = head;

        while (atual->next != anterior) {
            if (atual->data > atual->next->data) {
                swap(atual, atual->next);
                trocado = 1;
            }
            atual = atual->next;
        }
        anterior = atual;
    } while (trocado);
}

int main() {
    Node* head = NULL;
    push(&head, 64);
    push(&head, 34);
    push(&head, 25);
    push(&head, 12);
    push(&head, 22);
    push(&head, 11);
    push(&head, 93);

    printf("Lista original: \n");
    printList(head);

    bubbleSort(head);

    printf("Lista ordenada usando Bubble Sort: \n");
    printList(head);

    return 0;
}

