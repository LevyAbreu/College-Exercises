//14) Escreva um algoritmo que receba quinze números do usuário e armazene em um vetor a raiz quadrada de cada número. 
//Caso o valor digitado seja menor que zero o número –1 deve ser atribuído ao elemento do vetor. Após isso, o algoritmo 
//deve imprimir todos os valores armazenados.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int tamanho = 15;
    double vetor[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o " << i + 1 << "o número: ";
        cin >> vetor[i];
        if (vetor[i] < 0) {
            vetor[i] = -1;
        } else {
            vetor[i] = sqrt(vetor[i]);
        }
    }

    cout << "\nValores armazenados no vetor (raiz quadrada de cada número digitado):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
