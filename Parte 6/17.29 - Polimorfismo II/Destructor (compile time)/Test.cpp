#include <iostream>
#include "Test.hpp"

Test::Test()
{
    std::cout << "Test construído!" << '\n';
}

Test::~Test()
{
    std::cout << "Test destruído!" << '\n';
}