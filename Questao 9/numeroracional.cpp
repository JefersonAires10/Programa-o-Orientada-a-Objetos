#include "numeroracional.h"
#include <iostream>
#include <iomanip>

using namespace std;

NumeroRacional::NumeroRacional(float Numerador, float Denominador)
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

/*float NumeroRacional::getNumerador() {
    return Numerador;
}
float NumeroRacional::getDenominador() {
    return Denominador;
}
void NumeroRacional::setNumerador(float Numerador) {
    this -> Numerador = Numerador;
}
void NumeroRacional::setDenominador(float Denominador) {
    this -> Denominador = Denominador;
}*/

NumeroRacional NumeroRacional::operator+(NumeroRacional &A)
{
    NumeroRacional auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador) + (this->Denominador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroRacional NumeroRacional::operator-(NumeroRacional &A)
{
    NumeroRacional auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador) - (this->Denominador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroRacional NumeroRacional::operator*(NumeroRacional &A)
{
    NumeroRacional auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Numerador);
    auxiliar.Denominador = (this->Denominador * A.Denominador);
    return auxiliar;
}
NumeroRacional NumeroRacional::operator/(NumeroRacional &A)
{
    NumeroRacional auxiliar;
    auxiliar.Numerador = (this->Numerador * A.Denominador);
    auxiliar.Denominador = (this->Denominador * A.Numerador);
    return auxiliar;
}

float NumeroRacional::Racional(float Numerador, float Denominador)
{
    float x;
    x = Numerador / Denominador;
    return x;
}

void NumeroRacional::printNumeroRacional()
{
    cout << fixed << setprecision(3) << Racional(Numerador, Denominador) << endl;
}
