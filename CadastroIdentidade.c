#include <stdio.h>

// Endereco
struct end {
    char Rua[100], Bairro[100], Cidade[100], Estado[100], CEP[20];
};
// Cadastro geral
struct link {
    char nome[100], id[20], cpf[20], estadocivil[20], telefone[20], sexo[10];
    int idade;
    float salario;
    struct end Endereco;
};
int main() {
    int i, Midade, tamanho = 5;
    struct link Cadastro[tamanho];
    char busca[20];

    for (i = 0; i < tamanho; i++) {
        // Entrada
        printf("Nome: ");
        scanf("%s", Cadastro[i].nome);
      
        printf("Cadastro do Endereço\n");
        printf("Rua: ");
        scanf("%s", Cadastro[i].Endereco.Rua);
        printf("Bairro: ");
        scanf("%s", Cadastro[i].Endereco.Bairro);
        printf("Cidade: ");
        scanf("%s", Cadastro[i].Endereco.Cidade);
        printf("Estado: ");
        scanf("%s", Cadastro[i].Endereco.Estado);
        printf("CEP: ");
        scanf("%s", Cadastro[i].Endereco.CEP);

        printf("Salario: ");
        scanf("%f", &Cadastro[i].salario);
        printf("Identidade: ");
        scanf("%s", Cadastro[i].id);
        printf("CPF: ");
        scanf("%s", Cadastro[i].cpf);
        printf("Estado Civil: ");
        scanf("%s", Cadastro[i].estadocivil);
        printf("Telefone: ");
        scanf("%s", Cadastro[i].telefone);
        printf("Idade: ");
        scanf("%d", &Cadastro[i].idade);
        printf("Sexo: ");
        scanf("%s", Cadastro[i].sexo);
    }

    for (i = 0; i < tamanho; i++) {
        // Maior idade
        if (Cadastro[i].idade > Cadastro[Midade].idade) {
            Midade = i;
        }
    }
    printf("Usuário com a maior idade: %s - %d anos\n", Cadastro[Midade].nome, Cadastro[Midade].idade);
    printf("Usuários do sexo masculino:\n");
    for (i = 0; i < tamanho; i++) {
        // Sexo
        if (strcmp(Cadastro[i].sexo, "Masculino") == 0 || strcmp(Cadastro[i].sexo, "Masc") == 0 || strcmp(Cadastro[i].sexo, "M") == 0 || strcmp(Cadastro[i].sexo, "m") == 0) {
            printf("%s\n", Cadastro[i].nome);
        }
    }
    printf("Usuários com o salário acima de 1000 R$:\n");
    for (i = 0; i < tamanho; i++) {
        // Salario
        if (Cadastro[i].salario > 1000.0) {
            printf("%s - %.2f R$\n", Cadastro[i].nome, Cadastro[i].salario);
        }
    }
    // Busca por identidade
    printf("Digite um valor a ser buscado (identidade): ");
    scanf("%s", busca);
    for (i = 0; i < tamanho; i++) {
        if (strcmp(busca, Cadastro[i].id) == 0) {
            printf("Nome: %s\n", Cadastro[i].nome);
            printf("Endereco: Rua %s, Bairro %s, %s, %s, Cep - %s\n", Cadastro[i].Endereco.Rua, Cadastro[i].Endereco.Bairro,
                   Cadastro[i].Endereco.Cidade, Cadastro[i].Endereco.Estado, Cadastro[i].Endereco.CEP);
            printf("Salario: %.2f\n", Cadastro[i].salario);
            printf("Identidade: %s\n", Cadastro[i].id);
            printf("CPF: %s\n", Cadastro[i].cpf);
            printf("Estado Civil: %s\n", Cadastro[i].estadocivil);

            printf("Telefone: %s", Cadastro[i].telefone);
            printf("Idade: %d", Cadastro[i].idade);
            printf("Sexo: %s", Cadastro[i].sexo);
        } else {
            printf("!! Identidade Não Encontrada !!");
        }
    }

    return 0;
}
