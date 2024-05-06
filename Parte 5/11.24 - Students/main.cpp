#include <iostream>
#include "Students.hpp"

void acessGrade(Students*& s, int grade) 
{
    s->setGrade(grade);
}

int main() 
{
    Students* gabriel = new Students("Gabriel");
    Students* daniel = new Students("Daniel");
    Students* nicolas = new Students("Nicolas");

    std::cout << gabriel->getName() << '\n';
    std::cout << daniel->getName() << '\n';
    std::cout << nicolas->getName() << '\n';

    acessGrade(gabriel, 10);
    std::cout << "Nota de Gabriel: " << gabriel->getGrade() << '\n';
    acessGrade(daniel, 8);
    std::cout << "Nota de Gabriel: " << daniel->getGrade() << '\n';
    acessGrade(nicolas, 7);
    std::cout << "Nota de Gabriel: " << nicolas->getGrade() << '\n';
}