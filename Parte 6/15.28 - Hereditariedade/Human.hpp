#pragma once
#include <iostream>

class Human 
{
protected:
    std::string name;
    int age;

public:

    // Constructor, destructors, getters and setters
    Human(std::string name, int age);
    std::string getName();
    int getAge();
    ~Human();

    // Human methods
    void toSpeak(std::string message);
};