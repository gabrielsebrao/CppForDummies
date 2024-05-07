#include "Grade.hpp"

void Grade::setGrade(int grade) 
{
    this->grade = grade;
}

void Grade::setDate(char date[9]) 
{
    this->date = date;
}

int Grade::getGrade() 
{
    return this->grade;
}

char* Grade::getDate() 
{
    return this->date;
}

Grade::Grade() 
{
    numberOfGrades++;
}