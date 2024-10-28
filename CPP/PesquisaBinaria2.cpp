#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função de busca binária para strings
int binarySearch(char arr[][100], int l, int r, char x[], int* interactions) {
    while (l <= r) {
        (*interactions)++;
        int m = l + (r - l) / 2;

        int res = strcmp(arr[m], x);

        if (res == 0)
            return m;
        if (res < 0)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    char arr[][100] = {"apple", "banana", "cherry", "date", "fig", "grape", "kiwi"};
    int n = sizeof(arr) / sizeof(arr[0]);
    char x[] = "date";
    int interactions = 0;
    clock_t start, end;

    start = clock();
    int result = binarySearch(arr, 0, n - 1, x, &interactions);
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

