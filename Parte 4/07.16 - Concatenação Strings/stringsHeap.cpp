#include <iostream>
#include <cstring>

// CONSEGUI CONCATECAR STRINGS SEM USAR PORRA DE CLASSE STRING AI CHUPA KKKK

const char* concatanateStrings(const char* array1, const char* array2);

    static char* finalArray;

int main() {

    const char* message = "Ola, ";
    const char* name = "Gabriel";

    const char* carta = concatanateStrings(message, name);
    std::cout << carta << '\n';

    delete finalArray;
}

const char* concatanateStrings(const char* array1, const char* array2) {
    finalArray = new char[strlen(array1)+strlen(array2)+1];
    int nFinalArray = 0;

    for(; nFinalArray < strlen(array1); nFinalArray++) {
        finalArray[nFinalArray] = array1[nFinalArray];
    }
    
    for(; nFinalArray < strlen(array2)+strlen(array1); nFinalArray++) {
        finalArray[nFinalArray] = array2[nFinalArray-strlen(array1)];
    }

    return finalArray;
}