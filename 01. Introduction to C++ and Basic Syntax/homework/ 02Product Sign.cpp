#include <iostream>

int main() {
	int num1, num2, num3;

	std::cin >> num1 >> num2 >> num3;

	int result = num1 * num2 * num3;

	if (result < 0) {
		std::cout << "-" << std::endl;

		return 0;
	}

	std::cout << "+" << std::endl;

	return 0;
}