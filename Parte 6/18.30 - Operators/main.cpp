#include "Student.hpp"

int main()
{
    Student gabriel("Gabriel", 17);
    Student daniel("Daniel", 80);

    // Sem o operator=, o programa vai deletar o name duas vezes, dando problema sério de memória.
    gabriel = daniel;

    std::cout << "Idade gabriel: " << gabriel.getAge() << '\n';
    std::cout << "Idade daniel: " << daniel.getAge() << '\n';
}