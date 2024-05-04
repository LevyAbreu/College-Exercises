// Criar uma estrutura chamada DadosAluno, que armazena a média e idade de um aluno. Na função main: criar uma
//variável que é uma estrutura DadosAluno; ler a média e a idade de um aluno e armazenar na variável criada; exibir na tela a
//média e a idade do aluno.

#include <stdio.h>

struct link{
    float media;
    int idade;
};
int main(){
    struct link DadosAluno;

    printf("digite a média do aluno: ");
    scanf("%f", &DadosAluno.media);
    printf("digite a idade do aluno: ");
    scanf("%d", &DadosAluno.idade);

    printf("a idade do aluno é: %d \n", DadosAluno.idade);
    printf("a sua media é: %.2f", DadosAluno.media);

    return 0;
}
