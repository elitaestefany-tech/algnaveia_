#include <stdio.h>

int main() {
    int i, num;

    // Digite um numero de 1 a 10
    do {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    // informe  a tabuada do número
    for (i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);

    return 0;
}
