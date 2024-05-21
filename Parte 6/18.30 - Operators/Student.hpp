#pragma once
#include <iostream>

class Student 
{
protected:
    std::string* name;
    int age;
public:
    Student(std::string name, int age);
    ~Student();
    std::string getName();
    int getAge();
    Student& operator=(Student& student);
};