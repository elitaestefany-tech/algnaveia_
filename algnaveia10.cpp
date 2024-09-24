#include <stdio.h>
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
int main() {
    struct Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }
    printf("\nInformações dos Alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: Nome: %s, Idade: %d, Nota: %.2f\n",
               i + 1, alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }
    return 0;
}