#include <iostream>
#include "tempo.h"

using namespace std;

int main()
{

    Tempo Hora1(5, 00, 00);
    Hora1.printTempo();

    Tempo Hora2(10, 03, 00);
    Hora2.printTempo();

    Tempo Hora3(Hora1 + Hora2);
    Hora3.printTempo();

    Tempo Hora4(Hora3 - Hora2);
    Hora4.printTempo();
}