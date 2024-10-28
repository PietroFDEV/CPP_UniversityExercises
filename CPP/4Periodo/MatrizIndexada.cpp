#include <stdio.h>

int main() {
    int matriz[5][5] = {0};
    int x, y, connection;
    char continuar;

    do {
        printf("Informe os índices X e Y (0 a 4) da matriz para definir uma conexão:\n");
        printf("X: ");
        scanf("%d", &x);
        printf("Y: ");
        scanf("%d", &y);

        if (x >= 0 && x < 5 && y >= 0 && y < 5) {
            printf("Existe uma conexão entre [%d][%d]? (1 para sim, 0 para não): ", x, y);
            scanf("%d", &connection);

            matriz[x][y] = connection;
        } else {
            printf("Índices fora dos limites da matriz. Tente novamente.\n");
        }

        printf("Deseja continuar inserindo conexões? (s para sim, qualquer outra tecla para não): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Matriz de conexões 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

