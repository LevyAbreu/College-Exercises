//18) Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura inferior a 15oC nem superior a 40oC. 
//As temperaturas verificadas em cada dia estão disponíveis em uma unidade de entrada de dados. Fazer um algoritmo que calcule e imprima:
//        - A menor temperatura ocorrida;
//        - A maior temperatura ocorrida;
//        - A temperatura média;
//        - O número de dias nos quais a temperatura foi inferior à temperatura média.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int numDias = 121;
    vector<int> temperaturas(numDias);

    cout << "Digite as temperaturas verificadas em cada dia durante os 121 dias:\n";
    for (int i = 0; i < numDias; ++i) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];
    }

    int menorTemperatura = temperaturas[0];
    int maiorTemperatura = temperaturas[0];
    int somaTemperaturas = temperaturas[0];
    int numDiasInferiorMedia = 0;
  
    for (int i = 1; i < numDias; ++i) {
        if (temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
        }
        if (temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
        }
        somaTemperaturas += temperaturas[i];
    }

    double temperaturaMedia = static_cast<double>(somaTemperaturas) / numDias;

    for (int i = 0; i < numDias; ++i) {
        if (temperaturas[i] < temperaturaMedia) {
            numDiasInferiorMedia++;
        }
    }

    cout << "\nMenor temperatura ocorrida: " << menorTemperatura << "oC\n";
    cout << "Maior temperatura ocorrida: " << maiorTemperatura << "oC\n";
    cout << "Temperatura média: " << temperaturaMedia << "oC\n";
    cout << "Número de dias nos quais a temperatura foi inferior à temperatura média: " << numDiasInferiorMedia << endl;

    return 0;
}
