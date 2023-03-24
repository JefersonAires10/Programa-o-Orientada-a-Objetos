#include <iostream>
#include "numeroracional.h"

using namespace std;

int main()
{

    NumeroRacional a(1, 0);

    NumeroRacional b(20, 2);
    b.printNumeroRacional();

    NumeroRacional c(40, 4);
    c.printNumeroRacional();

    NumeroRacional d(b + c);
    d.printNumeroRacional();

    NumeroRacional e(b - c);
    e.printNumeroRacional();

    NumeroRacional f(b * c);
    f.printNumeroRacional();

    NumeroRacional g(b / c);
    g.printNumeroRacional();
}