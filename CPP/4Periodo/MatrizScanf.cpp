#include <stdio.h>

int main() {
    int matriz[5][5] = {};

	for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

