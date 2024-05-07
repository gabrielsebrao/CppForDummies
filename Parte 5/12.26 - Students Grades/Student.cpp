#include "Student.hpp"

Student::Student(std::string name, char id[5]) 
{
    this->name = name;
    this->id = id;
    numberOfStudents++;
}

std::string Student::getName() 
{
    return this->name;
}

char* Student::getId() 
{
    return this->id;
}

void Student::setGradeTest(int grade, char date[9], int numberOfGrade) 
{
    this->grades[numberOfGrade].setGrade(grade);
    this->grades[numberOfGrade].setDate(date);
}

Grade* Student::getGradeTest(int numberOfGrade) 
{
    return &(this->grades[numberOfGrade]);
}