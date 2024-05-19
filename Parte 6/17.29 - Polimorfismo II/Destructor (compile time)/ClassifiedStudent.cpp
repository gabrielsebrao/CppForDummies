#include <iostream>
#include "ClassifiedStudent.hpp"

ClassifiedStudent::ClassifiedStudent()
{
    std::cout << "ClassifiedStudent criado!" << '\n';
}

bool ClassifiedStudent::isClassified()
{
    return true;
}

ClassifiedStudent::~ClassifiedStudent()
{
    std::cout << "ClassifiedStudent destruído!" << '\n';
    delete[] testes;
}