/*
Crie uma classe Empregado que inclua os atributos nome ( string), sobrenome ( string) e
salário mensal (número real). A classe deve incluir construtores para cada um dos atributos
para evitar lixo e também getters e setters. Crie um programa que teste a classe, criando
dois objetos, calculando o salário anual de cada, dando um aumento de 10% e calcule o
salário anual novamente.
*/
#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado
{
private:
    string Nome;
    string Sobrenome;
    double SalarioMensal;

public:
    Empregado(string Nome);
    Empregado(string Sobrenome);
    Empregado(double salarioMensal);

    // GETS
    string getNome();
    string getSobrenome();
    double getSalarioMensal();

    // SETS
    void setNome(string Nome);
    void setSobrenome(string Sobrenome);
    void setSalarioMensal(double salarioMensal);

    double SalarioAnual(double SalarioAnual);
    double Porcentagem(double Porcentagem);
};

#endif // EMPREGADO_H