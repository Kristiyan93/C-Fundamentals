#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::vector<int> integers;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int currentDigit;
		std::cin >> currentDigit;

		integers.push_back(currentDigit);
	}

	std::sort(integers.begin(), integers.begin() + n);

	std::cout << integers[0] << " " << integers[n - 1] << std::endl;

    return 0;
}