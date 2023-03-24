#include <iostream>
#include "estacionamento.h"

using namespace std;

Estacionamento::Estacionamento(string Placa, string Modelo, int Horas, int Minutos, int Segundos) : Tempo(Horas, Minutos, Segundos)
{
    setPlaca(Placa);
    setModelo(Modelo);
}

// GETS
string Estacionamento::getPlaca()
{
    return Placa;
}
string Estacionamento::getModelo()
{
    return Modelo;
    ;
}
// SETS
void Estacionamento::setPlaca(string Placa)
{
    this->Placa = Placa;
}
void Estacionamento::setModelo(string Modelo)
{
    this->Modelo = Modelo;
}

float Estacionamento::caculaValor(int j) { return j * 1.5; }

// PRINT
void Estacionamento::printEstacionamento()
{
    Tempo::printTempo();
    cout << "Placa: " << getPlaca() << endl;
    cout << "Modelo: " << getModelo() << endl;
}