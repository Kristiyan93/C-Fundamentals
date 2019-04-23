#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size;
    std::cin >> size;

    std::vector<int> vecor;

    for (int i = 0; i < size; ++i) {
        int digit;
        std::cin >> digit;

        vecor.push_back(digit);
    }

    std::sort(vecor.begin(), vecor.end());

    for (int j = vecor.size() - 1; j > -1; --j) {
        std::cout << vecor[j];
    }

    std::cout << "\n";
    return 0;
}