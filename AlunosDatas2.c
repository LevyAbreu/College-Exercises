#include <stdio.h>

struct link {
    char nome[100];
    char matricula[20];
    float n1, n2, media;
    int saida;
};

int main() {
    struct link escola;
    do {
        printf("Nome: ");
        scanf("%s", escola.nome);
        printf("Matrícula: ");
        scanf("%s", escola.matricula);
        printf("Digite a primeira nota: ");
        scanf("%f", &escola.n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &escola.n2);

        escola.media = (escola.n1 + escola.n2) / 2;
        printf("[0] Continuar\n[1] Sair: ");
        scanf("%d", &escola.saida);

        printf("%s - %s - %.2f\n", escola.nome, escola.matricula, escola.media);
    } while (escola.saida == 0);

    return 0;
}
