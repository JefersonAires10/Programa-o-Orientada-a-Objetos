#ifndef TEMPO_H
#define TEMPO_H

#include <stdio.h>
#include <string.h>
using namespace std;

class Tempo
{
private:
    int Horas; //
    int Minutos;
    int Segundos;

public:
    Tempo() = default;
    Tempo(int Horas, int Minutos, int Segundos);

    // GETS
    int getHoras();
    int getMinutos();
    int getSegundos();

    // SETS
    void setHoras(int Horas);
    void setMinutos(int Minutos);
    void setSegundos(int Segundos);

    Tempo operator-(Tempo &V);
    Tempo operator+(Tempo &V);

    // PRINT
    void printTempo();
};

#endif