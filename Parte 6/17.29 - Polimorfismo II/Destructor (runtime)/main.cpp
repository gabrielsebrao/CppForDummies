#include <iostream>
#include "Student.hpp"
#include "ClassifiedStudent.hpp"
#include "Test.hpp"

ClassifiedStudent* newClassifiedStudent();

int main()
{
    Student* cs = newClassifiedStudent();
    std::cout << "Se cs é classificado: " << cs->isClassified() << '\n';
    delete cs;
}

ClassifiedStudent* newClassifiedStudent()
{
    return new ClassifiedStudent;
}