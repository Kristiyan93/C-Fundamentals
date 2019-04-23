#include <iostream>

int main() {
    int size;
    std::cin >> size;

    int array[100];

    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    int closestNumber = INT_MAX;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == j) {
                continue;
            }

            int number = abs(array[i] - array[j]);

            if (number < closestNumber) {
                closestNumber = number;
            }
        }
    }

    std::cout << closestNumber << "\n";

    return 0;
}