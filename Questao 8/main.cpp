#include <iostream>
#include "estacionamento.h"

using namespace std;

float calculaValor(int j)
{
    return j * 1.5;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        Estacionamento carro("JEF-1214", "Fusca", 10, 20, 30);
        Tempo saiu(18, 00, 00);

        int j = saiu.getHoras() - carro.getHoras();

        carro.printEstacionamento();
        cout << "Horario de saida: ";
        saiu.printTempo();
        cout << endl;
        cout << "Valor total pelo o estacionamento: " << calculaValor(j) << endl;
    }
}