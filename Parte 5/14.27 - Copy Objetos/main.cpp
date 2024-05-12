#include <iostream>
#include "Student.hpp"

void criarCopia(Student& s) 
{
    std::cout << "Criado cóṕia de " << s.getName() << '\n';
}

int main()
{
    Student student1("Gabriel", 17, 1000);
    Student student2("", 0, 0);

    std::cout << '\n' << "Antes da Cópia" << '\n';

    std::cout << "Student 1" << '\n'
    << "Name: " << student1.getName() << '\n'
    << "Age: " << student1.getAge() << '\n'
    << "Id: " << student1.getId() << '\n';

    std::cout << "Student 2" << '\n'
    << "Name: " << student2.getName() << '\n'
    << "Age: " << student2.getAge() << '\n'
    << "Id: " << student2.getId() << '\n';

    student2 = student1;

    std::cout << '\n' << "Depois da Cópia" << '\n';

    std::cout << "Student 1" << '\n'
    << "Name: " << student1.getName() << '\n'
    << "Age: " << student1.getAge() << '\n'
    << "Id: " << student1.getId() << '\n';

    std::cout << "Student 2" << '\n'
    << "Name: " << student2.getName() << '\n'
    << "Age: " << student2.getAge() << '\n'
    << "Id: " << student2.getId() << '\n';

    student1.setName("Daniel");

    std::cout << '\n' << "Depois da Mudança do Nome do Student1" << '\n';

    std::cout << "Student 1" << '\n'
    << "Name: " << student1.getName() << '\n'
    << "Age: " << student1.getAge() << '\n'
    << "Id: " << student1.getId() << '\n';

    std::cout << "Student 2" << '\n'
    << "Name: " << student2.getName() << '\n'
    << "Age: " << student2.getAge() << '\n'
    << "Id: " << student2.getId() << '\n';
}