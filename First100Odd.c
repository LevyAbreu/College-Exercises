//8) Escreva um algoritmo que armazene em um vetor os 100 primeiros números ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream>

using namespace std;

int main() {
    const int tamanho = 100;
    int vetor[tamanho];
    int contador = 0;
    int numero = 1;

    while (contador < tamanho) {
        vetor[contador] = numero;
        numero += 2;
        contador++;
    }

    cout << "Valores armazenados no vetor (100 primeiros números ímpares):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
