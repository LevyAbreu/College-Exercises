//1) Escreva um algoritmo que armazene em um vetor todos os números inteiros de 0 a 50. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 51;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = i;
    }

    cout << "Valores armazenados no vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
