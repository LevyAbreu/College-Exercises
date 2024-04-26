//2) Escreva um algoritmo que armazene em um vetor todos os números inteiros do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 100;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = i + 1;
    }

    cout << "Valores armazenados no vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
