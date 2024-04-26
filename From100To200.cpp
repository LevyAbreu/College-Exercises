//4) Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 200. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 101;
    int vetor[tamanho];
    int valorInicial = 100;
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = valorInicial + i;
    }

    cout << "Valores armazenados no vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
