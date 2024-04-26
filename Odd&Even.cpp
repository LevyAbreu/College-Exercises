#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;

    int A[tamanho];
    int B[tamanho];

    cout << "Digite os elementos da matriz A:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        if (i % 2 == 0) {
            B[i] = A[i] + 6;
        } else {
            B[i] = A[i] * 6;
        }
    }

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
