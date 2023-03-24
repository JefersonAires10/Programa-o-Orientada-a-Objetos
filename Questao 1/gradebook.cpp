#include <iostream>
#include <string>
#include "gradebook.h"

using namespace std;

GradeBook::GradeBook() {}
GradeBook::GradeBook(string courseName, string nomeProfessor)
{
    this->courseName = courseName;
    this->nomeProfessor = nomeProfessor;
}

string GradeBook::getcourseName()
{
    return courseName;
}
void GradeBook::setcourseName(string courseName)
{
    this->courseName = courseName;
}

string GradeBook::getnomeProfessor()
{
    return nomeProfessor;
}
void GradeBook::setnomeProfessor(string nomeProfessor)
{
    this->nomeProfessor = nomeProfessor;
}

void GradeBook::printdisplayMessage()
{

    cout << "Welcome to the GradeBook for\n"
         << getcourseName() << "!" << endl;
    cout << "Welcome to the GradeBook for\n"
         << getnomeProfessor() << "!" << endl;
}