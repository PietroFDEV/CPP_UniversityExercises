#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Estrutura para índice
typedef struct {
    char key[100];
    int index;
} Index;

void createIndex(char arr[][100], int n, Index idx[], int blockSize) {
    for (int i = 0; i < n; i += blockSize) {
        strcpy(idx[i / blockSize].key, arr[i]);
        idx[i / blockSize].index = i;
    }
}

int indexedSearch(char arr[][100], int n, char x[], int blockSize, int* interactions) {
    int i = 0;
    while (i < n && strcmp(arr[i], x) <= 0) {
        (*interactions)++;
        i += blockSize;
    }
    int start = i - blockSize;
    for (int j = start; j < n && j < start + blockSize; j++) {
        (*interactions)++;
        if (strcmp(arr[j], x) == 0) {
            return j;
        }
    }
    return -1;
}

int main() {
    char arr[][100] = {"apple", "banana", "cherry", "date", "fig", "grape", "kiwi"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int blockSize = 2;
    Index idx[(n + blockSize - 1) / blockSize];
    char x[] = "date";
    int interactions = 0;
    clock_t start, end;

    createIndex(arr, n, idx, blockSize);

    start = clock();
    int result = indexedSearch(arr, n, x, blockSize, &interactions);
    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Element %s found at position %d\n", x, result);
    else
        printf("Element %s not found\n", x);

    printf("Interactions: %d\n", interactions);
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}

