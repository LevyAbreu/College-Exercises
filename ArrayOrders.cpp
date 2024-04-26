//3.	Faça um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de números reais. Se o código for zero, termine o algoritmo. 
//Se o código for 1, mostre o vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 50;
    float vetor[tamanho];
    int codigo;

    // Lendo o vetor de números reais
    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Lendo o código
    cout << "\nDigite o código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ";
    cin >> codigo;

    while (codigo != 0) {
        // Mostrando o vetor de acordo com o código
        if (codigo == 1) {
            cout << "\nVetor na ordem direta:\n";
            for (int i = 0; i < tamanho; ++i) {
                cout << vetor[i] << " ";
            }
        } else if (codigo == 2) {
            cout << "\nVetor na ordem inversa:\n";
            for (int i = tamanho - 1; i >= 0; --i) {
                cout << vetor[i] << " ";
            }
        } else {
            cout << "\nCódigo inválido! Digite novamente.\n";
        }

        // Solicitando um novo código
        cout << "\n\nDigite o código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ";
        cin >> codigo;
    }

    cout << "\nFim do programa.\n";

    return 0;
}
