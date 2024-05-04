//Criar uma variável que é um vetor da estrutura DadosAluno. O programa deve obter a
//média e a idade de 10 alunos. Depois, estes dados devem ser exibidos

#include <stdio.h>

struct link{
    float media;
    int idade;
};
int main(){
    int tamanho = 10, i;
    struct link DadosAlunos[tamanho];

    for (i=0; i<tamanho; i++){
        printf("digite a idade %d° do aluno: ", i+1);
        scanf("%d", &DadosAlunos[i].idade);
        printf("digite a dua média: ");
        scanf("%f", &DadosAlunos[i].media);
    }
    for (i=0; i<tamanho; i++){
        printf("a idade do %d° aluno é: %d \n", i+1, DadosAlunos[i].idade);
        printf("a sua media é: %.2f \n", DadosAlunos[i].media);
    }

    return 0;
}
