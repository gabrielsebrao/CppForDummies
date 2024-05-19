#include <iostream>
#include "Student.hpp"

bool Student::isClassified()
{
    return false;
}

Student::~Student()
{
    std::cout << "Student destruído!" << '\n';
}