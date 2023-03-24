#include "empregado.h"
#include <iostream>

using namespace std;

int main()
{

    string Nome, Sobrenome;
    double SalarioMensal;

    cout << "Nome: " << endl;
    cin >> Nome;

    cout << "Sobrenome: " << endl;
    cin >> Sobrenome;

    cout << "Salario: " << endl;
    cin >> SalarioMensal;

    Empregado *a = new Empregado(Nome);
    Empregado *a = new Empregado(Sobrenome);
    Empregado *a = new Empregado(SalarioMensal);

    Empregado *b = new Empregado(Nome);
    Empregado *b = new Empregado(Sobrenome);
    Empregado *b = new Empregado(SalarioMensal);

    a->SalarioAnual(SalarioMensal);
    a->Porcentagem(SalarioMensal);

    b->SalarioAnual(SalarioMensal);
    b->Porcentagem(SalarioMensal);
}