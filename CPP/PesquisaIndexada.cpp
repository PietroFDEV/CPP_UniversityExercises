#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para índice
typedef struct {
    int key;
    int index;
} Index;

void createIndex(int arr[], int n, Index idx[], int blockSize) {
    for (int i = 0; i < n; i += blockSize) {
        idx[i / blockSize].key = arr[i];
        idx[i / blockSize].index = i;
    }
}

int indexedSearch(int arr[], int n, int x, int blockSize, int* interactions) {
    int i = 0;
    while (i < n && arr[i] <= x) {
        (*interactions)++;
        i += blockSize;
    }
    int start = i - blockSize;
    for (int j = start; j < n && j < start + blockSize; j++) {
        (*interactions)++;
        if (arr[j] == x) {
            return j;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int blockSize = 3;
    Index idx[(n + blockSize - 1) / blockSize];
    int x = 7;
    int interactions = 0;
    clock_t start, end;

    createIndex(arr, n, idx, blockSize);

    start = clock();
    int result = indexedSearch(arr, n, x, blockSize, &interactions);
    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
        printf("Element %d found at position %d\n", x, result);
    else
        printf("Element %d not found\n", x);

    printf("Interactions: %d\n", interactions);
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}

