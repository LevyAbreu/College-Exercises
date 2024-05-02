//19) Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números inteiros de 1 a 100. 
//O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica, para cada mercadoria, o preço de venda. 
//Escreva um algoritmo para calcular o faturamento mensal do armazém. A tabela de preços é fornecida seguida pelos números das mercadorias e as quantidades vendidas. 
//Quando uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar da quantidade.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int numMercadorias = 100;
    vector<double> precos(numMercadorias);

    cout << "Digite os preços das 100 mercadorias:\n";
    for (int i = 0; i < numMercadorias; ++i) {
        cout << "Preço da mercadoria " << i + 1 << ": ";
        cin >> precos[i];
    }

    double faturamentoTotal = 0.0;

    cout << "\nDigite os números das mercadorias e as quantidades vendidas (digite 0 para quantidade quando não houver venda):\n";
    for (int i = 0; i < numMercadorias; ++i) {
        int numeroMercadoria, quantidadeVendida;
        cout << "Número da mercadoria: ";
        cin >> numeroMercadoria;
        cout << "Quantidade vendida: ";
        cin >> quantidadeVendida;

        if (quantidadeVendida > 0) {
            faturamentoTotal += precos[numeroMercadoria - 1] * quantidadeVendida;
        }
    }

    cout << "\nFaturamento mensal do armazém: R$ " << faturamentoTotal << endl;

    return 0;
}
