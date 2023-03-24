/* Crie uma classe Tempo com três atributos: horas, minutos e segundos. Crie dois construtores:
um para inicializar os atributos com valor 0 e outro para inicializar os atributos com
valores passados como argumentos. Crie métodos para:
(a) Funcionar como getter e setter;
(b) Imprimir os atributos no formato hh:mm:ss;
(c) Subtrair dois objetos e colocar o resultado no objeto que o chamou;
(d) Somar que soma dois objetos e colocar o resultado no objeto que o chamou;
(e) Sobrecarregue este último método para que retorne um objeto com o resultado da
operação.*/

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
