#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um nó no início da lista
Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

// Função para inserir um nó no fim da lista
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

// Função para remover o nó do início da lista
Node* removeFromBeginning(Node* head) {
    if (head == NULL) {
        printf("A lista está vazia.\n");
    } else {
        Node* temp = head;
        head = head->next;
        free(temp);
        printf("Nó removido do início da lista.\n");
    }
    return head;
}

// Função para remover o nó do fim da lista
Node* removeFromEnd(Node* head) {
    if (head == NULL) {
        printf("A lista está vazia.\n");
    } else {
        if (head->next == NULL) {
            free(head);
            head = NULL;
        } else {
            Node* prev = NULL;
            Node* curr = head;
            while (curr->next != NULL) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            free(curr);
        }
        printf("Nó removido do fim da lista.\n");
    }
    return head;
}

// Função para imprimir a lista
void printList(Node* head) {
    if (head == NULL) {
        printf("A lista está vazia.\n");
    } else {
        Node* temp = head;
        printf("Valor do topo: %d\n", temp->data);
        printf("Endereço e valor dos nós:\n");
        while (temp != NULL) {
            printf("Endereço: %p, Valor: %d\n", temp, temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = NULL; // Cabeça da lista
    int choice, data;

    do {
        printf("Menu:\n");
        printf("1. Inclusão no início da lista\n");
        printf("2. Inclusão no fim da lista\n");
        printf("3. Remoção do início da lista\n");
        printf("4. Remoção do fim da lista\n");
        printf("5. Impressão da lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Encerrando o programa.\n");
                break;
            case 1:
                printf("Digite o valor a ser inserido no início da lista: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                break;
            case 2:
                printf("Digite o valor a ser inserido no fim da lista: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;
            case 3:
                head = removeFromBeginning(head);
                break;
            case 4:
                head = removeFromEnd(head);
                break;
            case 5:
                printList(head);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

