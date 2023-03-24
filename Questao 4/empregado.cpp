#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

Empregado::Empregado(string Nome)
{
    this->Nome = Nome;
}
Empregado::Empregado(string Sobrenome)
{
    this->Sobrenome = Sobrenome;
}
Empregado::Empregado(double SalarioMensal)
{
    this->SalarioMensal = SalarioMensal;
}

string Empregado::getNome()
{
    return Nome;
}
void Empregado::setNome(string Nome)
{
    this->Nome = Nome;
}

string Empregado::getSobrenome()
{
    return Sobrenome;
}
void Empregado::setSobrenome(string Sobrenome)
{
    this->Sobrenome = Sobrenome;
}

double Empregado::getSalarioMensal()
{
    return SalarioMensal;
}
void Empregado::setSalarioMensal(double SalarioMensal)
{
    this->SalarioMensal = SalarioMensal;
}

double SalarioAnual(double SalarioAnual)
{
    cout << "Salario Anual eh: " << SalarioAnual * 12 << endl;
}
double Porcentagem(double Porcentagem)
{

    double SalarioAnual;
    double Porcentagem = (SalarioAnual * 10) / 100;
    SalarioAnual += Porcentagem;
    cout << "Seu salario com a porcentagem eh: " << SalarioAnual << endl;
}
