#pragma once
#include <iostream>
#include "Grade.hpp"

class Student 
{
protected:
    std::string name;
    char* id;
    Grade grades[4];

public:
    static int numberOfStudents;

    Student(std::string name, char id[5]);
    std::string getName();
    char* getId();
    void setGradeTest(int grade, char date[9], int numberOfGrade);
    Grade* getGradeTest(int numberOfGrade);
};