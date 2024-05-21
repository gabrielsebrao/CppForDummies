#include <iostream>
#include "Student.hpp"

Student::Student(std::string name, int age)
    : age(age)
{
    this->name = new std::string(name);
    std::cout << "Objeto " << *(this->name) << " criado!" << '\n';
}

std::string Student::getName()
{
    return *name;
}

int Student::getAge()
{
    return age;
}

Student::~Student()
{
    std::cout << "Objeto " << *name << " destruído!" << '\n';
    delete name;
}

Student& Student::operator=(Student& student)
{
    if(this != &student)
    {
        *(name) = *(student.name);
        age = student.age;
    }
    return *this;
}