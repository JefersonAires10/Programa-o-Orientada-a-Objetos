#include "aluno.h"
#include <iostream>

using namespace std;

Aluno::Aluno(string Nome, string Serie, string Grau)
{
    setNome(Nome);
    setSerie(Serie);
    setGrau(Grau);
}

// GETS
string Aluno::getNome()
{
    return Nome;
}
string Aluno::getSerie()
{
    return Serie;
}
string Aluno::getGrau()
{
    return Grau;
}

// SETS
void Aluno::setNome(string Nome)
{
    this->Nome = Nome;
}
void Aluno::setSerie(string Serie)
{
    this->Serie = Serie;
}
void Aluno::setGrau(string Grau)
{
    this->Grau = Grau;
}
