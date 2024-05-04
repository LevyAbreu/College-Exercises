#include <stdio.h>
struct link {
    char matricula, nome, cod;
    float n1, n2, media;
};

int main(){
    int i, tamanho=10;
    struct link Alunos[tamanho];

    //Entrada
    for (i=0; i<tamanho; i++){
        printf("Num de Matricula:");
        scanf("%s", &Alunos[i].matricula);
        printf("Nome:");
        scanf("%s", &Alunos[i].nome);
        printf("Cod da Disciplina:");
        scanf("%s", &Alunos[i].cod);
        printf("Primeira Nota:");
        scanf("%f", &Alunos[i].n1);
        printf("Segunda Nota:");
        scanf("%f", &Alunos[i].n2);

        Alunos[i].media = ((Alunos[i].n1 * 1) + (Alunos[i].n2 * 2)) / 3;
    }

    //Saída
    for (i=0; i<tamanho; i++){
        printf("Aluno: %s - ", Alunos[i].nome);
        printf("Média: %.2f \n", Alunos[i].media);
    }

    return 0;
}
