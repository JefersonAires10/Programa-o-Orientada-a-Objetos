#include <iostream>
#include "inteiro.h"
#include <iomanip>

using namespace std;

int main()
{

    NumeroInteiro a(1, 0);

    NumeroInteiro b(20, 2);
    b.printNumeroInteiro();

    NumeroInteiro c(40, 4);
    c.printNumeroInteiro();

    NumeroInteiro d(b + c);
    d.printNumeroInteiro();

    NumeroInteiro e(b - c);
    e.printNumeroInteiro();

    NumeroInteiro f(b * c);
    f.printNumeroInteiro();

    NumeroInteiro g(b / c);
    g.printNumeroInteiro();
}