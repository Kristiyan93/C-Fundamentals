#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size;
    std::cin >> size;

    std::vector<int> vecor;
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        int digit;
        std::cin >> digit;

        vecor.push_back(digit);
    }

    for (int i = 0; i < vecor.size(); ++i) {
        sum += vecor[i];
    }

    std::cout << sum << "\n";
    return 0;
}