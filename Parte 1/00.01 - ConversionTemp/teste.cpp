#include <iostream>

int main() {
    int celsius, fahrenheit;
    std::cout << "Enter the temperature in celsius: ";
    std::cin >> celsius ;
    fahrenheit = celsius * 9 / 5 + 32;
    std::cout << "Fahrenheit in values is: " << fahrenheit << '\n';
    system("PAUSE");
}