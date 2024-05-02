//5) Escreva um algoritmo que armazene em um vetor todos os números inteiros de 200 a 100 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 101;
    int vetor[tamanho];
    int valorInicial = 200;

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = valorInicial - i;
    }

    cout << "Valores armazenados no vetor em ordem decrescente:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
