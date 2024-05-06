#include "Students.hpp"

Students::Students(std::string name) 
{
    setName(name);
}

void Students::setName(std::string& name) 
{
    this->name = name;
}

void Students::setGrade(const int& grade) 
{
    this->grade = grade;
}

std::string& Students::getName() 
{
    return this->name;
}

const int& Students::getGrade() 
{
    return this->grade;
}