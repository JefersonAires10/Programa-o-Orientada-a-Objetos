#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

int main()
{
    double Saldo_inicial;
    cout << "Saldo Inicial: ";
    cin >> Saldo_inicial;

    double Credito;
    cout << "Credito: ";
    cin >> Credito;

    double Debito;
    cout << "Debito: ";
    cin >> Debito;

    Conta a(Saldo_inicial);
    Conta b(Saldo_inicial);

    a.Credito(Credito, Saldo_inicial);
    a.Debito(Debito);
    cout << a.getSaldo() << endl;

    b.Credito(Credito, Saldo_inicial);
    b.Debito(Debito);
    cout << b.getSaldo() << endl;
}