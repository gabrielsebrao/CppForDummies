#include <iostream>
#include "Student.hpp"
#include "ClassifiedStudent.hpp"

ClassifiedStudent* pointerFunction();

int main()
{
    Student s;
    ClassifiedStudent cs;

    Student* ptr_cs = pointerFunction();
    ClassifiedStudent* ptr_cs2 = pointerFunction();

    std::cout << "(Direto do main) isClassified do Student: " << s.isClassified() << '\n';
    std::cout << "(Direto do main) isClassified do ClassifiedStudent: " << cs.isClassified() << '\n';
    std::cout << "(Direto do pointerFunction) isClassified do Student: " << ptr_cs->isClassified() << '\n';
    std::cout << "(Direto do pointerFunction) isClassified do ClassifiedStudent: " << ptr_cs2->isClassified() << '\n';
    std::cout << "(Direto do pointerFunction) isClassified do Student(superclasse): " << ptr_cs->isClassified() << '\n';
}

ClassifiedStudent* pointerFunction()
{
    return new ClassifiedStudent;
}