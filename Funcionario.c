#include <stdio.h>

struct link {
    char nome, sexo, cpf, data, cargo, ;
    int idade, codigo;
    float salario;
};
int main(){
    struct link Funcionario;

    //Entrada
    printf("Nome do funcionário:");
    scanf("%s", &Funcionario.nome);
    printf("Idade:");
    scanf("%d", &Funcionario.idade);
    printf("Sexo:");
    scanf("%s", &Funcionario.sexo);
    printf("CPF:");
    scanf("%s", &Funcionario.cpf);
    printf("Data de Nasciment:");
    scanf("%s", &Funcionario.data);
    printf("Codigo do setor:");
    scanf("%d", &Funcionario.codigo);
    printf("Cargo que ocupa:");
    scanf("%s", &Funcionario.cargo);
    printf("Salário:");
    scanf("%f", &Funcionario.salario);

    //Saída
    printf("Nome do funcionário: %s\n", Funcionario.nome);
    printf("Idade: %d\n", Funcionario.idade);
    printf("Sexo: %s\n", Funcionario.sexo);
    printf("CPF: %s\n", Funcionario.cpf);
    printf("Data de Nasciment: %s\n", Funcionario.data);
    printf("Codigo do setor: %d\n", Funcionario.codigo);
    printf("Cargo que ocupa: %s\n", Funcionario.cargo);
    printf("Salário: %.2f\n", Funcionario.salario);

    return 0;
}
