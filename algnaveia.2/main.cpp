#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero1, numero2, numeroMaior;

    // Digite os numeros
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Verificar qual número é maior
    if (numero1 > numero2) {
        numeroMaior = numero1;
    } else if (numero2 > numero1) {
        numeroMaior = numero2;
    } else {
        printf("Os números são iguais.\n");
        return 0;
    }

    // Exibir o maior número
    printf("O maior número é: %d\n", numeroMaior);

    return 0;
}





