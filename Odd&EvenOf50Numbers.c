//17) Construa um algoritmo para calcular a média de valores PARES e ÍMPARES, de 50 números que serão digitados pelo usuário. 
//Ao final o algoritmo deve mostrar estas duas médias. O algoritmo deve mostrar também o maior número PAR digitado e o menor número ÍMPAR digitado. 
//Esses dados devem ser armazenados em um vetor. Além disso, devem ser impressos os valores PARES maiores que a média PAR, bem como os valores ÍMPARES menor que a média ÍMPAR.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanho = 50;
    vector<int> numeros(tamanho);

    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o " << i + 1 << "o número: ";
        cin >> numeros[i];
    }

    int somaPares = 0, numPares = 0, somaImpares = 0, numImpares = 0;
    int maiorPar = INT_MIN, menorImpar = INT_MAX;

    for (int i = 0; i < tamanho; ++i) {
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            numPares++;
            if (numeros[i] > maiorPar) {
                maiorPar = numeros[i];
            }
        } else {
            somaImpares += numeros[i];
            numImpares++;
            if (numeros[i] < menorImpar) {
                menorImpar = numeros[i];
            }
        }
    }

    double mediaPares = (numPares == 0) ? 0 : static_cast<double>(somaPares) / numPares;
    double mediaImpares = (numImpares == 0) ? 0 : static_cast<double>(somaImpares) / numImpares;

    vector<int> paresMaioresQueMedia;
    vector<int> imparesMenoresQueMedia;
    for (int i = 0; i < tamanho; ++i) {
        if (numeros[i] % 2 == 0 && numeros[i] > mediaPares) {
            paresMaioresQueMedia.push_back(numeros[i]);
        } else if (numeros[i] % 2 != 0 && numeros[i] < mediaImpares) {
            imparesMenoresQueMedia.push_back(numeros[i]);
        }
    }

    cout << "\nMédia dos valores pares: " << mediaPares << endl;
    cout << "Média dos valores ímpares: " << mediaImpares << endl;
    cout << "Maior número par: " << (numPares > 0 ? to_string(maiorPar) : "Nenhum") << endl;
    cout << "Menor número ímpar: " << (numImpares > 0 ? to_string(menorImpar) : "Nenhum") << endl;
    cout << "Valores pares maiores que a média par: ";
    for (int num : paresMaioresQueMedia) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Valores ímpares menores que a média ímpar: ";
    for (int num : imparesMenoresQueMedia) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
