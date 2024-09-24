#include <stdio.h>

int main() {
    // a matriz 2x2
    int matriz[2][2];

    // a matriz com valores fornecidos pelo usuário
    printf("Preencha a matriz 2x2 com valores inteiros:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // informando  a matriz
    printf("\nA matriz 2x2 preenchida é:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]); // Exibe o elemento da matriz
        }
        printf("\n");
    }

    return 0;
}

