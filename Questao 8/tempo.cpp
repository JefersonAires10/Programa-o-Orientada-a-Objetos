#include <iostream>
#include "tempo.h"
#include <iomanip>

using namespace std;

Tempo::Tempo(int Horas, int Minutos, int Segundos)
{
    while (Segundos >= 60)
    {
        Segundos -= 60;
        Minutos++;
    }
    while (Minutos >= 60)
    {
        Minutos -= 60;
        Horas++;
    }
    if (Horas >= 24)
    {
        Horas = 0;
    }

    setHoras(Horas);
    setHoras(Minutos);
    setHoras(Segundos);
}

// GETS
int Tempo::getHoras()
{
    return Horas;
}
int Tempo::getMinutos()
{
    return Minutos;
}
int Tempo::getSegundos()
{
    return Segundos;
}

// SETS
void Tempo::setHoras(int Horas)
{
    this->Horas = Horas;
}

void Tempo::setMinutos(int Minutos)
{
    this->Minutos = Minutos;
}

void Tempo::setSegundos(int Segundos)
{
    this->Segundos = Segundos;
}

void Tempo::printTempo()
{
    cout << fixed << setprecision(0) << getHoras() << ":" << getMinutos() << ":" << getSegundos() << endl;
}

Tempo Tempo::operator-(Tempo &V)
{
    Tempo auxiliar;
    auxiliar.Horas = this->Horas - V.Horas;
    auxiliar.Minutos = this->Minutos - V.Minutos;
    auxiliar.Segundos = this->Segundos - V.Segundos;

    return auxiliar;
}

Tempo Tempo::operator+(Tempo &V)
{
    Tempo auxiliar;
    auxiliar.Horas = this->Horas + V.Horas;
    auxiliar.Minutos = this->Minutos + V.Minutos;
    auxiliar.Segundos = this->Segundos + V.Segundos;

    return auxiliar;
}
