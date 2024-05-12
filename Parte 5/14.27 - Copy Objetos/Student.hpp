#pragma once
#include <iostream>

class Student {
protected:
    std::string name;
    int age;
    int id;
public:
    Student(std::string name, int age, int id);

    //getters
    std::string getName();
    int getAge();
    int getId();

    //setters
    void setName(std::string name);
    void setId(int id);
    void setAge(int age);
};