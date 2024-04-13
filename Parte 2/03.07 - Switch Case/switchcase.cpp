#include <iostream>

int main() {
	int firstValue, secondValue;
	char cOperator;
	
	std::cout << "First value: ";
	std::cin >> firstValue;

	std::cout << "Operator: ";
	std::cin >> cOperator;

	std::cout << "Second value: ";
	std::cin >> secondValue;

	switch(cOperator) {
		case '+': 
			std::cout << firstValue << " + " << secondValue << " = " << firstValue+secondValue << "\n";
			break;
		case '-':
			std::cout << firstValue << " - " << secondValue << " = " << firstValue-secondValue << "\n";
			break;
		case '*':
		case 'x': 
			std::cout << firstValue << " x " << secondValue << " = " << firstValue*secondValue << "\n";
			break;
		case '/':
			std::cout << firstValue << " / " << secondValue << " = " << firstValue/secondValue << "\n";
			break;
	}
	system("PAUSE");
}
