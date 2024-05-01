#include <iostream>

// fazer com que as duas variaveis nValue1 e nValue2 tenham os mesmos valores '50'

void sumValues(int* nArg1, int nSumValue);

int main() {
    int nValue1 = 10;
    int nValue2 = 20;

    sumValues(&nValue1, 40);
    sumValues(&nValue2, 30);

    std::cout << "O valor de nValue1 é " << nValue1 << '\n';
    std::cout << "O valor de nValue2 é " << nValue2 << '\n';
}

void sumValues(int* nArg, int nSumValue) {
    *nArg += nSumValue;
}