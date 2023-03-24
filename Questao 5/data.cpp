#include <iostream>
#include <string>
#include "data.h"

using namespace std;

Data::Data(int Dia, int Mes, int Ano)
{
    if (Mes > 12 && Mes < 1 || Dia > 31 && Dia < 1)
    {
        cout << "DATA INVALIDA" << endl;
        this->Dia = 0;
        this->Mes = 0;
        this->Ano = 0;
    }
    else
    {
        setDia(Dia);
        setMes(Mes);
        setAno(Ano);
    }
}
Data::Data(int Dia, string Mes, int Ano)
{

    int VerificaMes = 0;

    if (Mes == "janeiro")
    {
        VerificaMes = 1;
    }
    else if (Mes == "fevereiro")
    {
        VerificaMes = 2;
    }
    else if (Mes == "marco")
    {
        VerificaMes = 3;
    }
    else if (Mes == "abril")
    {
        VerificaMes = 4;
    }
    else if (Mes == "maio")
    {
        VerificaMes = 5;
    }
    else if (Mes == "junho")
    {
        VerificaMes = 6;
    }
    else if (Mes == "julho")
    {
        VerificaMes = 7;
    }
    else if (Mes == "agosto")
    {
        VerificaMes = 8;
    }
    else if (Mes == "setembro")
    {
        VerificaMes = 9;
    }
    else if (Mes == "outubro")
    {
        VerificaMes = 10;
    }
    else if (Mes == "novembro")
    {
        VerificaMes = 11;
    }
    else if (Mes == "dezembro")
    {
        VerificaMes = 12;
    }

    setDia(Dia);
    setMes(VerificaMes);
    setAno(Ano);
}

// CALCULA OS DIAS DO ANO ATE AQUELE MES COM STRING MES
int calcularData(int Dia, string Mes)
{

    int VerificaMes = 0;

    if (Mes == "janeiro")
    {
        VerificaMes = 1;
    }
    else if (Mes == "fevereiro")
    {
        VerificaMes = 2;
    }
    else if (Mes == "marco")
    {
        VerificaMes = 3;
    }
    else if (Mes == "abril")
    {
        VerificaMes = 4;
    }
    else if (Mes == "maio")
    {
        VerificaMes = 5;
    }
    else if (Mes == "junho")
    {
        VerificaMes = 6;
    }
    else if (Mes == "julho")
    {
        VerificaMes = 7;
    }
    else if (Mes == "agosto")
    {
        VerificaMes = 8;
    }
    else if (Mes == "setembro")
    {
        VerificaMes = 9;
    }
    else if (Mes == "outubro")
    {
        VerificaMes = 10;
    }
    else if (Mes == "novembro")
    {
        VerificaMes = 11;
    }
    else if (Mes == "dezembro")
    {
        VerificaMes = 12;
    }

    int mes = 0, cont = 0;
    for (int i = 0; i < mes; i++)
    {
        cont = cont + 30;
        mes++;
    }
    mes = mes / 2;
    cont = cont + mes;
    cont = cont - Dia;
    cout << "a quantidade de dias do ano até este mês eh: " << cont << endl;
}

// GETS E SETS
int Data::getDia()
{
    return Dia;
}
void Data::setDia(int dia)
{
    this->Dia = dia;
}

int Data::getMes()
{
    return Mes;
}
void Data::setMes(int Mes)
{
    this->Mes = Mes;
}

int Data::getAno()
{
    return Ano;
}
void Data::setAno(int ano)
{
    this->Ano = ano;
}

// FUNÇÃO IMPRIME DATA
void Data::printData()
{
    cout << "a quantidade de dias do ano até este mês eh: " << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

// CALCULA OS DIAS DO ANO ATE O MÊS COM INT
int Data::calcularData(int Dia, int Mes)
{
    if (Mes > 12 && Mes < 1 || Dia > 31 && Dia < 1)
    {
        cout << "DATA INVALIDA" << endl;
    }
    else
    {
        int mes = 0, cont = 0;
        for (int i = 0; i < mes; i++)
        {
            cont = cont + 30;
            mes++;
        }
        mes = mes / 2;
        cont = cont + mes;
        cont = cont - Dia;
        cout << "a quantidade de dias do ano até este mês eh: " << cont << endl;
    }
}