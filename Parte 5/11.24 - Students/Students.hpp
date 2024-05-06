#pragma once
#include <iostream>

class Students 
{

    friend void acessGrade(Students*& s, int grade);

    protected: 
        std::string name;
        int grade;
        void setName(std::string& name);
        void setGrade(const int& grade);

    public: 
        Students(std::string name);
        std::string& getName();
        const int& getGrade();
};
