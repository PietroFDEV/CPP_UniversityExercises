#include <stdio.h>

int main() {
    int matriz[5][5] = {0};
    int x, y, connection;
    char continuar;

    do {
        printf("Informe os �ndices X e Y (0 a 4) da matriz para definir uma conex�o:\n");
        printf("X: ");
        scanf("%d", &x);
        printf("Y: ");
        scanf("%d", &y);

        if (x >= 0 && x < 5 && y >= 0 && y < 5) {
            printf("Existe uma conex�o entre [%d][%d]? (1 para sim, 0 para n�o): ", x, y);
            scanf("%d", &connection);

            matriz[x][y] = connection;
        } else {
            printf("�ndices fora dos limites da matriz. Tente novamente.\n");
        }

        printf("Deseja continuar inserindo conex�es? (s para sim, qualquer outra tecla para n�o): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Matriz de conex�es 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

