
#include <stdio.h>

int main () {
    int a, b, c;

    // Leitura dos três números
    printf("Digite os tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Declaração e cálculo da média
    float media;
    media = (a + b + c) / 3.0;
    // Exibição da média
    printf("A media entre eles eh: %.2f\n", media);  

    return 0;
}

