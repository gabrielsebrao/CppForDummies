#include <iostream>
#include "Grade.hpp"
#include "Student.hpp"
#include "functions.hpp"

int main() 
{
    Student gabriel("Gabriel", "0123");
    gabriel.setGradeTest(10, "06052024", 0);
    getInfoTest(gabriel.getGradeTest(0), &gabriel);
    Student nicolas("Nicolas", "3210");
    nicolas.setGradeTest(9, "06052024", 0);
    getInfoTest(nicolas.getGradeTest(0), &nicolas);
    std::cout << "Quantidade de alunos: " << getNumberOfStudents() << '\n';
    std::cout << "Quantidade de notas: " << getNumberOfGrades() << '\n';
}
