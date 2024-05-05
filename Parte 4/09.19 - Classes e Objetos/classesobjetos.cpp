#include <iostream>

// em vez de usarmos arrays paralelos para guardar informações sobre usuários, usaremos as classes

class Student {
public:
    const char* name;
    int age;
    int id_student;
};

int main() {

    Student gabriel;
    gabriel.name = "Gabriel";
    gabriel.age = 17;
    gabriel.id_student = 1800;

    Student daniel = {"Daniel", 17, 1800};

    Student students[3] = {
        {"Nicolas", 17, 1917},
        {"Giulia", 17, 1560},
        {"Maria Fernanda", 18, 2007}
    };
    
}