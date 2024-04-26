//7) Escreva um algoritmo que armazene em um vetor todos os números pares do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 50;
    int vetor[tamanho];
    int contador = 0;

    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0) {
            vetor[contador] = i;
            contador++;
        }
    }

    cout << "Valores armazenados no vetor (números pares de 1 a 100):\n";
    for (int i = 0; i < contador; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
