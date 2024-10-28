#include <stdio.h>
#include <stdlib.h>

// Estrutura do n� da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fun��o para criar um novo n�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fun��o para inserir um n� no in�cio da lista
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

// Fun��o para inserir um n� no fim da lista
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

// Fun��o para remover o n� do in�cio da lista
Node* removeFromBeginning(Node* head) {
    if (head == NULL) {
        printf("A lista est� vazia.\n");
    } else {
        Node* temp = head;
        head = head->next;
        free(temp);
        printf("N� removido do in�cio da lista.\n");
    }
    return head;
}

// Fun��o para remover o n� do fim da lista
Node* removeFromEnd(Node* head) {
    if (head == NULL) {
        printf("A lista est� vazia.\n");
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
        printf("N� removido do fim da lista.\n");
    }
    return head;
}

// Fun��o para imprimir a lista
void printList(Node* head) {
    if (head == NULL) {
        printf("A lista est� vazia.\n");
    } else {
        Node* temp = head;
        printf("Valor do topo: %d\n", temp->data);
        printf("Endere�o e valor dos n�s:\n");
        while (temp != NULL) {
            printf("Endere�o: %p, Valor: %d\n", temp, temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = NULL; // Cabe�a da lista
    int choice, data;

    do {
        printf("Menu:\n");
        printf("1. Inclus�o no in�cio da lista\n");
        printf("2. Inclus�o no fim da lista\n");
        printf("3. Remo��o do in�cio da lista\n");
        printf("4. Remo��o do fim da lista\n");
        printf("5. Impress�o da lista\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Encerrando o programa.\n");
                break;
            case 1:
                printf("Digite o valor a ser inserido no in�cio da lista: ");
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
                printf("Op��o inv�lida. Tente novamente.\n");
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

