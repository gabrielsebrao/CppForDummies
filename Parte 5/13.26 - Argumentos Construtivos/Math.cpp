#include "Math.hpp"
#include <iostream>

Math::Math() : PI(3.1415) 
{
    std::cout << "Construtor de constante chamado!" << '\n';
}

Math::Math(int num1, int num2, char operador) : num1(num1), num2(num2), operador(operador), PI(3.1415)
{
    std::cout << "Construtor de variáveis e constante chamado!" << '\n';
}