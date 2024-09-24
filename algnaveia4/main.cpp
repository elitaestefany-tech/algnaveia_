#include <stdio.h>

int main() {
    int a;

    printf("Informe um n°: ");
    scanf("%d", &a);

    // Verificação se o número é par ou ímpar
    if (a % 2 == 0) {
        printf("%d é par.\n", a);
    } else {
        printf("%d é ímpar.\n", a);
    }

    return 0;
}
