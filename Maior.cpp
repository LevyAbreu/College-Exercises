//1.	Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o menor elemento e sua posição no vetor.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 80;
    int vetor[tamanho];

    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int menor = vetor[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    cout << "O menor elemento do vetor é: " << menor << endl;
    cout << "Sua posição no vetor é: " << posicao + 1 << endl;

    return 0;
}
