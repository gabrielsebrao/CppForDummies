#include "Student.hpp"

Student::Student(std::string name, int age, int student_id)
    : student_id(student_id), Human(name, age)
{
    std::cout << "Object Student construído!" << '\n';
}

int Student::getStudent_Id()
{
    return student_id;
}

Student::~Student()
{
    std::cout << "Object Student destruído!" << '\n';
}