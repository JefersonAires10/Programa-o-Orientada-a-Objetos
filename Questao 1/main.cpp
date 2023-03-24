#include <iostream>
using namespace std;

#include "gradebook.h"

int main()
{

    GradeBook grade_book1("BCC221 - POO", "Ciencia da Computacao");
    GradeBook grade_book2("BCC202 - AED's I", "Thiago Werlley");

    cout << "grade_book1 create for course: "
         << " " << grade_book1.getcourseName()
         << "\ngrade_book2 create for course: "
         << " " << grade_book2.getcourseName() << endl;

    cout << "grade_book1 create for course: "
         << " " << grade_book1.getnomeProfessor()
         << "\ngrade_book2 create for course: "
         << " " << grade_book2.getnomeProfessor() << endl;

    return 0;
}