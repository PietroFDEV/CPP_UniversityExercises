#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

// Binary Search for integers
int* binary_search(int arr[], int size, int key, int *count) {
    int *indices = (int *)malloc(size * sizeof(int));

    int index = 0;
    clock_t start_time = clock();

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        (*count)++;
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            indices[index++] = mid;
            int left = mid - 1;
            while (left >= 0 && arr[left] == key) {
                indices[index++] = left--;
            }
            int right = mid + 1;
            while (right < size && arr[right] == key) {
                indices[index++] = right++;
            }
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int count = 0;

    int *result = binary_search(arr, size, key, &count);
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

