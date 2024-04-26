//4.	Faça um algoritmo que leia um vetor de 500 posições de números inteiros e divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 500;
    int vetor[tamanho];
    int maior = INT_MIN;

    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    cout << "\nVetor após a divisão por " << maior << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] /= maior;
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
