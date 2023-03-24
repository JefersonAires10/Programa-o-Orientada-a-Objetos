#include <iostream>
#include <string>

using namespace std;

class Conta
{
private:
    double Saldo;

public:
    Conta(double Saldo_inicial);
    void Credito(double Credito, double Saldo_inicial);
    void Debito(double Debito);
    void setSaldo(double Saldo);
    double getSaldo();
};