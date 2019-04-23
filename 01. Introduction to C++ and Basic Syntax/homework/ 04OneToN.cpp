#include <iostream>

int main() {
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == n) {
			std::cout << i << std::endl;
			continue;
		}

		std::cout << i << " ";
	}

    return 0;
}