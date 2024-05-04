//Fazer um programa que cria uma estrutura livro, que contém os elementos título, ano de edição, número de
//páginas e preço. Criar uma variável desta estrutura que é um vetor de 5 elementos. Ler os valores para a estrutura e
//imprimir a média do número de páginas do livros.


#include <stdio.h>

struct link{
    char titulo, ano;
    int paginas;
    float preco;
};
int main(){
    int tamanho = 5, i;
    struct link Livros[tamanho];
    float media = 0;

    for (i=0; i<tamanho; i++){
        printf("digite o titulo do %d° livro: ", i+1);
        scanf("%s", &Livros[i].titulo);
        printf("digite o ano: ");
        scanf("%s", &Livros[i].ano);
        printf("digite o numero de paginas: ");
        scanf("%d", &Livros[i].paginas);
        printf("digite o preço: ");
        scanf("%f", &Livros[i].preco);

        media = media + Livros[i].paginas;
    }
    printf("média de numero de paginas = %.2f", media/tamanho);

    return 0;
}

