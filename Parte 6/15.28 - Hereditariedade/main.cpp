#include "Human.hpp"
#include "Student.hpp"

void showHuman(Human& human);

int main()
{
    Human daniel("Daniel", 20);
    Student gabriel("Gabriel", 17, 1000);

    std::cout << gabriel.getName() << '\n';
    showHuman(daniel);
    showHuman(gabriel);
}

void showHuman(Human& human)
{
    std::cout << "Human Info\n"
    << "Human name: " << human.getName() << '\n' 
    << "Human age: " << human.getAge() << '\n';
}