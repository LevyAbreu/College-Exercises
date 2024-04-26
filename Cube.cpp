//13) Escreva um algoritmo que receba dez números do usuário e armazene em um vetor o cubo de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    double vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o " << i + 1 << "o número: ";
        cin >> vetor[i];
        vetor[i] = vetor[i] * vetor[i] * vetor[i];
    }

    cout << "\nValores armazenados no vetor (cubo de cada número digitado):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
