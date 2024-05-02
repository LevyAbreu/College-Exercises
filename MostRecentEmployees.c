//20) Uma grande firma deseja saber quais os três empregados mais recentes. Fazer um algoritmo para ler um número indeterminado de informações 
//(máximo de 300) contendo o número do empregado e o número de meses de trabalho deste empregado e imprimir os três mais recentes.
//Observações: A última informação contém os dois números iguais a zero. Não existem dois empregados admitidos no mesmo mês.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Empregado {
    int numero;
    int mesesTrabalhados;
};

bool compararPorMeses(const Empregado &a, const Empregado &b) {
    return a.mesesTrabalhados < b.mesesTrabalhados;
}

int main() {
    const int maxEmpregados = 300;
    vector<Empregado> empregados;

    cout << "Digite o numero do empregado e o numero de meses de trabalho (ou 0 0 para terminar):\n";
    while (true) {
        Empregado emp;
        cin >> emp.numero >> emp.mesesTrabalhados;
        if (emp.numero == 0 && emp.mesesTrabalhados == 0) {
            break;
        }
        empregados.push_back(emp);
    }

    sort(empregados.begin(), empregados.end(), compararPorMeses);

    int numEmpregados = empregados.size();
    cout << "\nOs tres empregados mais recentes sao:\n";
    for (int i = numEmpregados - 1; i >= max(numEmpregados - 3, 0); --i) {
        cout << "Numero do empregado: " << empregados[i].numero << ", Meses de trabalho: " << empregados[i].mesesTrabalhados << endl;
    }

    return 0;
}
