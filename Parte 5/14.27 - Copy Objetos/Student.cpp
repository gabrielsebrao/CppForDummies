#include "Student.hpp"
#include <iostream>

Student::Student(std::string name, int age, int id) 
    : name(name), age(age), id(id)
{
    std::cout << "Construtor de " << this->name << " chamado!" << '\n';
}

//getters
std::string Student::getName()
{
    return this->name;
}

int Student::getAge() 
{
    return this->age;
}

int Student::getId()
{
    return this->id;
}

//setters
void Student::setName(std::string name)
{
    this->name = name;
}

void Student::setId(int id) 
{
    this->id = id;
}

void Student::setAge(int age) 
{
    this->age = age;
}