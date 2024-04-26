//2.	Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores 0 por 1. Mostre os 2 vetores. 

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 30;
    int vetorOriginal[tamanho];
    int vetorModificado[tamanho];

    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetorOriginal[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        if (vetorOriginal[i] == 0) {
            vetorModificado[i] = 1;
        } else {
            vetorModificado[i] = vetorOriginal[i];
        }
    }

    cout << "\nVetor original:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorOriginal[i] << " ";
    }

    cout << "\n\nVetor modificado (substituindo 0 por 1):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorModificado[i] << " ";
    }
    cout << endl;

    return 0;
}
