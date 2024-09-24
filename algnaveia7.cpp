#include <stdio.h>

// Função para encontrar o maior número
int maior(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a, b; 

    // Informe o número
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Mostra resultado
    printf("O maior número é: %d\n", maior(a, b));

    return 0;
}

