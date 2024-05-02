//10.	Fazer um algoritmo que leia os valores de duas matrizes 3×3 e imprima a multiplicação das duas matrizes.

#include <iostream>

using namespace std;

int main() {
    const int linhas = 3;
    const int colunas = 3;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int resultado[linhas][colunas];

    cout << "Digite os elementos da primeira matriz 3x3:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\nDigite os elementos da segunda matriz 3x3:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nResultado da multiplicacao das matrizes:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
