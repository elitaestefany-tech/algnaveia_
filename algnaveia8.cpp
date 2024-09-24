#include <stdio.h>
#include <stdlib.h>


int tamanhoString(char string[]);

int main(void) {
    char stringUsuario[20];

    printf("Digite uma palavra (string):\n");
    scanf("%s", stringUsuario);

    int num = tamanhoString(stringUsuario);
    printf("A string %s possui %i caracteres.\n", stringUsuario, num);

    system("pause");
    return 0;
}

int tamanhoString(char string[]) {
    int numCaracteres = 0;

    while (string[numCaracteres] != '\0') {
        ++numCaracteres;
    }
    return numCaracteres;
}
