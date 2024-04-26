//9.	Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.

#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 3;
    const int tamanhoMatriz = 3;

    int vetor[tamanhoVetor];
    int matriz[tamanhoMatriz][tamanhoMatriz];

    cout << "Digite os " << tamanhoVetor << " elementos do vetor:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nDigite os elementos da matriz 3x3:\n";
    for (int i = 0; i < tamanhoMatriz; ++i) {
        for (int j = 0; j < tamanhoMatriz; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nResultado da multiplicação do vetor pelas colunas da matriz:\n";
    for (int j = 0; j < tamanhoMatriz; ++j) {
        int resultado = 0;
        for (int i = 0; i < tamanhoVetor; ++i) {
            resultado += vetor[i] * matriz[i][j];
        }
        cout << "Coluna " << j + 1 << ": " << resultado << endl;
    }

    return 0;
}
