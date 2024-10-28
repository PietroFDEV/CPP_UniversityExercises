#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define INDEX_SIZE 5

// Indexed Search for strings
int* indexed_search(char *arr[], int size, char *key, int *count) {
    int *indices = (int *)malloc(size * sizeof(int));
    int index = 0;
    clock_t start_time = clock();

    int jump = size / INDEX_SIZE;
    int indexes[INDEX_SIZE];
    for (int i = 0; i < INDEX_SIZE; i++) {
        indexes[i] = i * jump;
    }

    for (int i = 0; i < INDEX_SIZE; i++) {
        (*count)++;
        if (strcmp(arr[indexes[i]], key) == 0) {
            indices[index++] = indexes[i];
        }
    }

    for (int i = 0; i < index; i++) {
        for (int j = indexes[i]; j < size && j < indexes[i] + jump; j++) {
            (*count)++;
            if (strcmp(arr[j], key) == 0) {
                indices[index++] = j;
            }
        }
    }

    clock_t end_time = clock();
    double execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution time: %lf seconds\n", execution_time);

    if (index == 0) {
        printf("Element not found\n");
        return NULL;
    } else {
        printf("Total occurrences: %d\n", index);
        return indices;
    }
}

int main() {
    char *arr[] = {"apple", "banana", "orange", "apple", "kiwi", "apple", "grape", "apple"};
    int size = sizeof(arr) / sizeof(arr[0]);
    char *key = "apple";
    int count = 0;

    int *result = indexed_search(arr, size, key, &count);
    if (result != NULL) {
        printf("Indices of occurrences:\n");
        for (int i = 0; i < size && result[i] != 0; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
    printf("Total iterations: %d\n", count);

    return 0;
}

