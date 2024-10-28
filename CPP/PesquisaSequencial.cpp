#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar a pesquisa sequencial e retornar todas as ocorrências
int sequentialSearch(int arr[], int n, int x, int results[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            results[count++] = i;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, 3, 7, 8, 5, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int results[n];
    int interactions = 0;
    clock_t start, end;

    start = clock();
    int count = sequentialSearch(arr, n, x, results);
    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Element %d found %d times at positions: ", x, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", results[i]);
    }
    printf("\n");

    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}

