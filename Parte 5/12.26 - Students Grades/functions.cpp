#include <iostream>
#include "functions.hpp"

int Student::numberOfStudents = 0;
int Grade::numberOfGrades = 0;

void getInfoTest(Grade* ptrGrade, Student* ptrStudent) 
{
    std::cout << "Nome do estudante: " <<ptrStudent->getName() << '\n'
    << "Nota da prova: " << ptrGrade->getGrade() << '\n'
    << "Data da prova: " << ptrGrade->getDate() << '\n';
}

int getNumberOfStudents() 
{
    return Student::numberOfStudents;
}

int getNumberOfGrades() 
{
    return Grade::numberOfGrades;
}