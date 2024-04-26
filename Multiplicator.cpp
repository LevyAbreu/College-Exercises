//5.	Elaborar um algoritmo que le uma matriz M (6,6) e um valor para A (uma variável). Multiplicar a matriz M pelo valor A e coloca os valores 
//da matriz multiplicados por A em um vetor de V(36) e escreva no final o vetor V.

#include <iostream>

using namespace std;

int main() {
    const int linhas = 6;
    const int colunas = 6;
    const int tamanhoVetor = linhas * colunas;

    int M[linhas][colunas];
    int A;
    int V[tamanhoVetor];

    cout << "Digite os elementos da matriz M (6x6):\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "\nDigite o valor de A: ";
    cin >> A;

    int indiceV = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            V[indiceV] = M[i][j] * A;
            indiceV++;
        }
    }

    cout << "\nVetor V após a multiplicação da matriz M por A:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
