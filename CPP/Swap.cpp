#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct Node {
    int data;
    struct Node* next;
};

// Função para imprimir a lista ligada
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Função para adicionar um nó no início da lista
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Função para trocar dois nós dados os ponteiros para esses nós
void swapNodes(struct Node** head_ref, struct Node* node1, struct Node* node2) {
    if (node1 == node2) return;

    struct Node* prev1 = NULL, *prev2 = NULL, *temp = *head_ref;

    // Encontrar os nós anteriores a node1 e node2
    while (temp != NULL && temp->next != node1 && temp->next != node2) {
        temp = temp->next;
    }

    if (temp != NULL && temp->next == node1) {
        prev1 = temp;
    } else if (temp != NULL && temp->next == node2) {
        prev2 = temp;
    }

    temp = *head_ref;

    while (temp != NULL && temp->next != node1 && temp->next != node2) {
        temp = temp->next;
    }

    if (temp != NULL && temp->next == node1) {
        prev1 = temp;
    } else if (temp != NULL && temp->next == node2) {
        prev2 = temp;
    }

    if (prev1 != NULL) prev1->next = node2;
    if (prev2 != NULL) prev2->next = node1;

    // Trocar os ponteiros next de node1 e node2
    temp = node1->next;
    node1->next = node2->next;
    node2->next = temp;

    // Atualizar a cabeça da lista se necessário
    if (*head_ref == node1) {
        *head_ref = node2;
    } else if (*head_ref == node2) {
        *head_ref = node1;
    }
}

int main() {
    struct Node* head = NULL;

    // Criar a lista ligada: 10 -> 15 -> 12 -> 13 -> 20 -> 14
    push(&head, 14);
    push(&head, 20);
    push(&head, 13);
    push(&head, 12);
    push(&head, 15);
    push(&head, 10);

    printf("Lista original: \n");
    printList(head);

    // Encontrar os nós a serem trocados
    struct Node* node1 = head->next; // 15
    struct Node* node2 = head->next->next->next; // 13

    // Trocar os nós
    swapNodes(&head, node1, node2);

    printf("Lista após a troca dos nós: \n");
    printList(head);

    return 0;
}

