/*9. Crie uma classe NumeroInteiro (fração), com as seguintes características
(a) Crie um construtor que evita o valor zero ou negativo como denominador;
(b) Sobrecarregue os operadores de adição, subtração, multiplicação e divisão entre objetos desta
classe;
(c) Sobrecarregue os operadores relacionais para os objetos desta classe.*/

#ifndef NumeroInteiro_H
#define NumeroInteiro_H

#include <iostream>
#include <string>

using namespace std;

class NumeroInteiro
{
private:
    float Numerador;
    float Denominador;

public:
    NumeroInteiro() = default;
    NumeroInteiro(float numerador, float denominador);

    /*float getNumerador();
    float getDenominador();

    void setNumerador(float numerador);
    void setDenominador(float denominador);*/

    float Racional(float numerador, float denominador);

    NumeroInteiro operator+(NumeroInteiro &A);
    NumeroInteiro operator-(NumeroInteiro &A);
    NumeroInteiro operator*(NumeroInteiro &A);
    NumeroInteiro operator/(NumeroInteiro &A);

    void printNumeroInteiro();
};

#endif
