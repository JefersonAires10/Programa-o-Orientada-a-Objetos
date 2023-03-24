/*Crie uma classe Aluno com atributos que armazenem o nome, a série que cursa e o
grau. Crie um getter e um setter, além de umav ariável static que conte a quantidade
de objetos criados, a ser utilizada no construtor e destrutor. Crie um vetor com 15
objetos desta classe e preencha os dados através do setter.*/

#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
private:
    string Nome;
    string Serie;
    string Grau;

public:
    Aluno(string Nome, string Serie, string Grau);

    // GETS
    string getNome();
    string getSerie();
    string getGrau();

    // SETS
    void setNome(string Nome);
    void setSerie(string Serie);
    void setGrau(string Grau);
};

#endif