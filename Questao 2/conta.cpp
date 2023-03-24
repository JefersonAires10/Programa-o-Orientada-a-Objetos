#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

Conta::Conta(double Saldo_inicial)
{
    if (Saldo_inicial >= 0)
    {
        cout << "OK" << endl;
    }
    else if (Saldo_inicial < 0)
    {
        Saldo = 0;
        cout << "ERRO" << endl;
    }
}

void Conta::Credito(double Credito, double Saldo_inicial)
{
    Saldo = Saldo_inicial + Credito;
}

void Conta::Debito(double Debito)
{
    if (Debito > Saldo)
    {
        cout << "OPERACAO NAO PODE SER REALIZADA" << endl;
        return;
    }
    else
    {
        Saldo = Saldo - Debito;
    }
}

void Conta::setSaldo(double Saldo)
{
    this->Saldo = Saldo;
}
double Conta::getSaldo()
{
    return Saldo;
}
