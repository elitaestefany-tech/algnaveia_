#include <stdio.h>

// Definindo a estrutura Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Criando uma instância da estrutura Pessoa
    struct Pessoa pessoa;

    // o usuário digitar o nome
    printf("Digite o nome: ");
    scanf("%49s", pessoa.nome);
    // Pedindo para o usuário digitar a idade
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade); // Lê a idade

    //  usuário digitar a altura
    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    // Exibindo os dados preenchidos dos usurarios
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f m\n", pessoa.altura);

    return 0;
}
