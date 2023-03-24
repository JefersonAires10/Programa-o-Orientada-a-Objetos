/*Crie uma classe Estacionamento para armazenar dados de um estacionamento. Os
atributos devem representar a placa e modelo do carro além da hora de entrada e saída
do estacionamento. Utilize dois objetos da classe Tempo criada no exercício anterior. Crie
métodos para:
(a) Funcionar como getter e setter;
(b) Inicializar os dados com vazio ou zero;
(c) Imprimir os dados de um carro estacionado;
(d) Calcular e retornar o valor a ser pago pelo carro estacionado. Considere o preço
de R$1,50 por hora. Utilize o método da classe Tempo.
Crie um vetor de 5 posições e preencha-o para testar sua classe*/

#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>
#include "tempo.h"

using namespace std;

class Estacionamento : public Tempo
{
private:
    string Placa;
    string Modelo;

public:
    Estacionamento() = default;
    Estacionamento(Tempo V);
    Estacionamento(string Placa, string Modelo, int Horas, int Minutos, int Segundos);

    // GETS
    string getPlaca();
    string getModelo();

    // SETS
    void setPlaca(string Placa);
    void setModelo(string Modelo);

    void printEstacionamento();

    float caculaValor(int j);
};

#endif