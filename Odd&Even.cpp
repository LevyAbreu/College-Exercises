#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;

    // Declarando as matrizes A e B
    int A[tamanho];
    int B[tamanho];

    // Leitura dos elementos da matriz A
    cout << "Digite os elementos da matriz A:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    // Construindo a matriz B de acordo com a regra dada
    for (int i = 0; i < tamanho; ++i) {
        if (i % 2 == 0) { // Se o índice for par
            B[i] = A[i] + 6;
        } else { // Se o índice for ímpar
            B[i] = A[i] * 6;
        }
    }

    // Exibindo os conteúdos das duas matrizes
    cout << "\nMatriz A:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << A[i] << " ";
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << B[i] << " ";
    }

    cout << endl;

    return 0;
}
