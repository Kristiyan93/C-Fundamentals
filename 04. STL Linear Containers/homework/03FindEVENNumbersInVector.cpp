#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> vector;
    int size;
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        int digit;
        std::cin >> digit;
        vector.push_back(digit);
    }

    int countEven = 0;
    
    auto n = count_if(vector.begin(), vector.end(), [](int n) {
        return (n % 2) == 0;
    });

    if (n == 0) {
        std::cout << "EVEN not found" << std::endl;
        return 0;
    }


    for (int i = 0; i < vector.size(); ++i) {
        if (vector.at(i) % 2 != 0) {
            std::cout << vector.at(i);
            continue;
        }

        countEven++;
    }

    std::cout << std::endl;

    return 0;
}