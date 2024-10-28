1. Basic Conditions and Repeats
Conditions
c
Copiar código
#include <stdio.h>

int main() {
    int a = 10;
    
    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is less than or equal to 5\n");
    }
    
    return 0;
}
Repeaters (Loops)
For Loop:

c
Copiar código
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    
    return 0;
}
While Loop:

c
Copiar código
#include <stdio.h>

int main() {
    int i = 0;
    
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    
    return 0;
}
2. Sorting Methods
Bubble Sort
c
Copiar código
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
Insertion Sort
c
Copiar código
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
Selection Sort
c
Copiar código
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
3. Linked List Example
c
Copiar código
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    printList(head);
    
    return 0;
}
4. Pointers and Structs
c
Copiar código
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y;
};

void printPoint(struct Point* p) {
    printf("Point x: %d, y: %d\n", p->x, p->y);
}

int main() {
    struct Point* p = (struct Point*)malloc(sizeof(struct Point));
    
    p->x = 10;
    p->y = 20;
    
    printPoint(p);
    
    free(p);
    
    return 0;
}
5. Vectors (Arrays) and Matrices (2D Arrays)
Vector:

c
Copiar código
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
Matrix:

c
Copiar código
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
6. Functions and Using scanf with Pointers
Function with Pointers:

c
Copiar código
#include <stdio.h>

void add(int* a, int* b, int* result) {
    *result = *a + *b;
}

int main() {
    int a, b, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    add(&a, &b, &result);
    
    printf("Sum: %d\n", result);
    
    return 0;
}
