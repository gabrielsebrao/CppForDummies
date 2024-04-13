#include <iostream>

int main() {
    int nValue;
    std::cout << "Enter a int value: ";
    std::cin >> nValue;

    char cValue = (char) nValue;
    std::cout << "Char: " << cValue << "\n";
    system("PAUSE");
}