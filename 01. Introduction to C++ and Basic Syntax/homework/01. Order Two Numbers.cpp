#include <iostream>

int main() {
	int firstNumber, secNumber;

	std::cin >> firstNumber >> secNumber;

	if (firstNumber < secNumber) {
		std::cout << firstNumber << " " << secNumber << std::endl;

		return 0;
	}

	std::cout << secNumber << " " << firstNumber << std::endl;

	return 0;
}