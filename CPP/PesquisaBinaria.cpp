#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de busca binária
int binarySearch(int arr[], int l, int r, int x, int* interactions) {
    while (l <= r) {
        (*interactions)++;
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int interactions = 0;
    clock_t start, end;

    start = clock();
    int result = binarySearch(arr, 0, n - 1, x, &interactions);
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

