//9) Escreva um algoritmo que armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 1 a 20. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int contador = 0;

    for (int i = 1; i <= 20; ++i) {
        if (i % 2 != 0) {
            vetor[contador] = i * i;
            contador++;
        }
    }

    cout << "Valores armazenados no vetor (quadrados dos números ímpares de 1 a 20):\n";
    for (int i = 0; i < contador; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
