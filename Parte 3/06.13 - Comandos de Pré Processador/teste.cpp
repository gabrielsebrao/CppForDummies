#include <iostream>

void printError(int option);

int main() {
    printError(0);
}

void printError(int option) {
    switch(option) {
        case 0:
            std::cout << __LINE__ << '\n';
            break;
        case 1:
            std::cout << __FILE__ << '\n';
            break;
        case 2: 
            std::cout << __DATE__ << '\n';
            break;
        case 3: 
            std::cout << __TIME__ << '\n';
            break;
        case 4: 
            std::cout << __FUNCTION__ << '\n';
            break;
        case 5: 
            std::cout << __PRETTY_FUNCTION__ << '\n';
            break;
    }
}