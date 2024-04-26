//6.	Faça um programa que leia uma matriz 10x10 de inteiros. A seguir transforme-a em um vetor.

#include <iostream>

using namespace std;

int main() {
    const int linhas = 10;
    const int colunas = 10;
    const int tamanhoVetor = linhas * colunas;

    int matriz[linhas][colunas];
    int vetor[tamanhoVetor];

    cout << "Digite os elementos da matriz 10x10:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int indiceVetor = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            vetor[indiceVetor] = matriz[i][j];
            indiceVetor++;
        }
    }

    cout << "\nVetor resultante:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
