#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
private:
    string courseName;
    string nomeProfessor;

public:
    GradeBook();
    GradeBook(string courseName, string nomeProfessor);

    string getcourseName();
    void setcourseName(string courseName);

    string getnomeProfessor();
    void setnomeProfessor(string nomeProfessor);

    void printdisplayMessage();
};
