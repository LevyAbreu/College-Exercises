//3) Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 1 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 100;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = tamanho - i;
    }

    cout << "Valores armazenados no vetor em ordem decrescente:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
