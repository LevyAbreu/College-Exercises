//8.	Desenvolva um programa que leia um vetor Vet de 10 posições e divida-o em dois de 5 posições. Ao final escreva todos os vetores.

#include <iostream>

using namespace std;

int main() {
    const int tamanhoOriginal = 10;
    const int tamanhoMetade = tamanhoOriginal / 2;

    int Vet[tamanhoOriginal];
    int Vet1[tamanhoMetade];
    int Vet2[tamanhoMetade];

    cout << "Digite os " << tamanhoOriginal << " elementos do vetor Vet:\n";
    for (int i = 0; i < tamanhoOriginal; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> Vet[i];
    }

    for (int i = 0; i < tamanhoMetade; ++i) {
        Vet1[i] = Vet[i];
        Vet2[i] = Vet[i + tamanhoMetade];
    }

    cout << "\nVetor Vet1:\n";
    for (int i = 0; i < tamanhoMetade; ++i) {
        cout << Vet1[i] << " ";
    }

    cout << "\n\nVetor Vet2:\n";
    for (int i = 0; i < tamanhoMetade; ++i) {
        cout << Vet2[i] << " ";
    }

    cout << endl;

    return 0;
}
