/*9. Crie uma classe NumeroRacional (fração), com as seguintes características
(a) Crie um construtor que evita o valor zero ou negativo como denominador;
(b) Sobrecarregue os operadores de adição, subtração, multiplicação e divisão entre objetos desta
classe;
(c) Sobrecarregue os operadores relacionais para os objetos desta classe.*/

#ifndef NUMERORACIONAL_H
#define NUMERORACIONAL_H

#include <iostream>
#include <string>

using namespace std;

class NumeroRacional
{
private:
    float Numerador;
    float Denominador;

public:
    NumeroRacional() = default;
    NumeroRacional(float numerador, float denominador);

    /*float getNumerador();
    float getDenominador();

    void setNumerador(float numerador);
    void setDenominador(float denominador);*/

    float Racional(float numerador, float denominador);

    NumeroRacional operator+(NumeroRacional &A);
    NumeroRacional operator-(NumeroRacional &A);
    NumeroRacional operator*(NumeroRacional &A);
    NumeroRacional operator/(NumeroRacional &A);

    void printNumeroRacional();
};

#endif
