#include "inteiro.h"
#include <iostream>
#include <iomanip>

using namespace std;

NumeroInteiro::NumeroInteiro(float Numerador, float Denominador)
{
    if (Denominador <= 0)
    {
        cout << "Denominador invalid" << endl;
    }
    else
    {
        this->Numerador = Numerador;
        this->Denominador = Denominador;
    }
}

/*float NumeroInteiro::getNumerador() {
    return Numerador;
}
float NumeroInteiro::getDenominador() {
    return Denominador;
}
void NumeroInteiro::setNumerador(float Numerador) {
    this -> Numerador = Numerador;
}
void NumeroInteiro::setDenominador(float Denominador) {
    this -> Denominador = Denominador;
}*/

NumeroInteiro NumeroInteiro::operator+(NumeroInteiro &A)
{
    NumeroInteiro auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador) + (this->Denominador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroInteiro NumeroInteiro::operator-(NumeroInteiro &A)
{
    NumeroInteiro auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador) - (this->Denominador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroInteiro NumeroInteiro::operator*(NumeroInteiro &A)
{
    NumeroInteiro auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroInteiro NumeroInteiro::operator/(NumeroInteiro &A)
{
    NumeroInteiro auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador);
    auxiliar.Denominador = (this->Denominador * A.Numerador);
    return auxiliar;
}

float NumeroInteiro::Racional(float Numerador, float Denominador)
{
    float x;
    x = Numerador / Denominador;
    return x;
}

void NumeroInteiro::printNumeroInteiro()
{
    cout << fixed << setprecision(0) << Racional(Numerador, Denominador) << endl;
}
