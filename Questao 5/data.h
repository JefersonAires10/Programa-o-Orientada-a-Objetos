/*Crie uma classe Data que inclua três atributos: mês (inteiro), dia (inteiro) e ano (inteiro).
Crie métodos para:
(a) Funcionar como getter e setter, validando os dados para garantir que os valores são
reais;
(b) Funcionar como um construtor (com parâmetros padronizados) com três parâmetros
para inicialização dos três atributos;
(c) Imprimir a data, com os campos separados por /;
(d) Calcular a quantidade de dias do ano até aquele mês, recebendo como parâmetro o
número do mês;
(e) Sobrecarregue o método anterior para realizar o mesmo cálculo, porém, recebendo
como parâmetro o nome do mês, em letras minúsculas.
Escreva um programa que teste todos os métodos da classe. Para simplificar o
exercício, considere meses ímpares com 31 dias e meses pares com 30 dias.
*/
#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data
{
private:
    int Dia;
    int Mes;
    int Ano;

public:
    // CONSTRUTORES
    Data(int Dia, int Mes, int Ano);
    Data(int Dia, string Mes, int Ano);

    // CALCULAR DATA
    int calcularData(int Dia, int Mes);
    int calcularData(int Dia, string Mes);

    // GETS
    int getDia();
    int getMes();
    int getAno();

    // SETS
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);

    // PRINT
    void printData();
};

#endif // DATA_H
