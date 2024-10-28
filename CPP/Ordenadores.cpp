#include <stdio.h>

void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int L[n1], R[n2];

    // Copiar dados para as sublistas L e R
    for (i = 0; i < n1; i++)
        L[i] = vetor[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j];

    // Mesclar as sublistas de volta para o vetor original
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de L, se houver algum
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de R, se houver algum
    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Ordenar a primeira metade e a segunda metade separadamente
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);

        // Mesclar as duas metades ordenadas
        merge(vetor, inicio, meio, fim);
    }
}

int main() {
    int vetor[] = {12, 11, 13, 5, 6, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    mergeSort(vetor, 0, tamanho - 1);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

