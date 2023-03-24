#include "aluno.h"
#include <iostream>
using namespace std;

int contObjetos()
{
    static int cont = 1;
    return cont++;
}

int main()
{

    string Nome;
    string Serie;
    string Grau;

    for (int i = 0; i < 15; i++)
    {
        cout << "Nome: " << endl;
        getline(cin, Nome);

        cout << "Serie: " << endl;
        getline(cin, Serie);

        cout << "Grau: " << endl;
        getline(cin, Grau);

        Aluno a(Nome, Serie, Grau);

        if (i + 1 < 15)
        {
            cout << a.getNome() << " "
                 << "Sua Serie eh " << a.getSerie() << ", e seu grau de escolaridade eh " << a.getGrau() << endl;
            cout << "Sua matricula eh: " << contObjetos() << endl;
            cout << "========================" << endl;
        }
        else
        {
            cout << a.getNome() << " "
                 << "Sua Serie eh " << a.getSerie() << ", e seu grau de escolaridade eh " << a.getGrau() << endl;
            cout << "Sua matricula eh: " << contObjetos() << endl;
        }
    }
}
