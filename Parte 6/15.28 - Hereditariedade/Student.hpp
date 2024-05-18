#pragma once
#include <iostream>
#include "Human.hpp"

class Student : public Human
{
protected:
    int student_id;
public:

    //Constructor, destructor, getters and setters
    Student(std::string name, int age, int student_id);
    int getStudent_Id();
    ~Student();
};