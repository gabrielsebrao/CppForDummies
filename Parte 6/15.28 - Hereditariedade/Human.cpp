#include "Human.hpp"

Human::Human(std::string name, int age) 
    : name(name), age(age)
{
    std::cout << "Object Human construído!" << '\n';
}

std::string Human::getName()
{
    return name;
}

int Human::getAge()
{
    return age;
}

// Human methods
void Human::toSpeak(std::string message)
{
    std::cout << message << '\n';
}

Human::~Human()
{
    std::cout << "Objeto Human destruído!" << '\n';
}