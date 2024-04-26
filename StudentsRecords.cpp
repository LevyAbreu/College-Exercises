//16) Escreva um algoritmo que leia um conjunto de 50 fichas correspondente à alunos e armazene-as em vetores, cada uma contendo, 
//a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
//         - A maior e a menor altura da turma;
//         - As mulheres com altura acima da média da altura das mulheres;
//         - As pessoas com altura abaixo da média da turma.

#include <iostream>
#include <vector>

using namespace std;

struct FichaAluno {
    double altura;
    int codigoSexo;
};

int main() {
    const int numAlunos = 50;
    vector<FichaAluno> fichas(numAlunos);

    for (int i = 0; i < numAlunos; ++i) {
        cout << "Ficha do aluno " << i + 1 << ":" << endl;
        cout << "Altura: ";
        cin >> fichas[i].altura;
        cout << "Código do sexo (1 para masculino, 2 para feminino): ";
        cin >> fichas[i].codigoSexo;
    }

    double maiorAltura = fichas[0].altura;
    double menorAltura = fichas[0].altura;
    for (int i = 1; i < numAlunos; ++i) {
        if (fichas[i].altura > maiorAltura) {
            maiorAltura = fichas[i].altura;
        }
        if (fichas[i].altura < menorAltura) {
            menorAltura = fichas[i].altura;
        }
    }

    double somaAlturaHomens = 0.0;
    int numHomens = 0;
    double somaAlturaMulheres = 0.0;
    int numMulheres = 0;
    for (int i = 0; i < numAlunos; ++i) {
        if (fichas[i].codigoSexo == 1) {
            somaAlturaHomens += fichas[i].altura;
            numHomens++;
        } else {
            somaAlturaMulheres += fichas[i].altura;
            numMulheres++;
        }
    }
    double mediaAlturaHomens = somaAlturaHomens / numHomens;
    double mediaAlturaMulheres = somaAlturaMulheres / numMulheres;

    cout << "\nMulheres com altura acima da média das mulheres (" << mediaAlturaMulheres << "):\n";
    for (int i = 0; i < numAlunos; ++i) {
        if (fichas[i].codigoSexo == 2 && fichas[i].altura > mediaAlturaMulheres) {
            cout << "Altura: " << fichas[i].altura << endl;
        }
    }

    double mediaAlturaTurma = (somaAlturaHomens + somaAlturaMulheres) / numAlunos;
    cout << "\nPessoas com altura abaixo da média da turma (" << mediaAlturaTurma << "):\n";
    for (int i = 0; i < numAlunos; ++i) {
        if (fichas[i].altura < mediaAlturaTurma) {
            cout << "Altura: " << fichas[i].altura << endl;
        }
    }

    cout << "\nMaior altura da turma: " << maiorAltura << endl;
    cout << "Menor altura da turma: " << menorAltura << endl;

    return 0;
}
