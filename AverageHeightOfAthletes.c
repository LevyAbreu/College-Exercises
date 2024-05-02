//15) Escreva um algoritmo que receba a altura de 10 atletas. Esse algoritmo deve imprimir a altura daqueles atletas que tem altura maior que a média.

#include <iostream>

using namespace std;

int main() {
    const int numAtletas = 10;
    double alturas[numAtletas];
    double somaAlturas = 0.0;

    cout << "Digite as alturas dos 10 atletas:\n";
    for (int i = 0; i < numAtletas; ++i) {
        cout << "Atleta " << i + 1 << ": ";
        cin >> alturas[i];
        somaAlturas += alturas[i];
    }

    double mediaAlturas = somaAlturas / numAtletas;

    cout << "\nAlturas dos atletas que têm altura maior que a média (" << mediaAlturas << "):\n";
    for (int i = 0; i < numAtletas; ++i) {
        if (alturas[i] > mediaAlturas) {
            cout << "Atleta " << i + 1 << ": " << alturas[i] << endl;
        }
    }

    return 0;
}
