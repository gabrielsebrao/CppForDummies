#include <iostream>
#include "Savings.hpp"

// usando conceitos de orientação a objetos com organização de arquivos ai mamae

int main()
{ 
    Savings gabriel = {1, 0.0};
    Savings nicolas = {2, 0.0};

    gabriel.deposit(100.0);
    gabriel.withdraw(50.0);

    nicolas.deposit(200.0);
    nicolas.withdraw(100.0);

    std::cout << "Deposito do Gabriel: " << gabriel.balance << '\n';
    std::cout << "Deposito do Nicolas: " << nicolas.balance << '\n';
}