#include <iostream>
#include <vector>
#include <climits>

std::vector<int> addNumbers(int);
void print(std::vector<int>);

int main() {
    int size;
    std::vector<int> vector;

    std::cin >> size;

    if (size < 2) {
        std::cout << 0 << std::endl;

        return 0;
    }

    vector = addNumbers(size);

    int currentNum = 0;
    int result = INT_MAX;

    while (currentNum <= size) {
        int digit = 0;
        for (int i = currentNum; i < size - 1; i++) {
            digit = abs(vector[currentNum] - vector[i + 1]);

            if (digit < result) {
                result = digit;
            }
        }

        currentNum++;
    }

    std::cout << result << std::endl;

    return 0;
}

std::vector<int> addNumbers(int size) {
    std::vector<int> vector;

    for (int i = 0; i < size; i++) {
        int digit;

        std::cin >> digit;

        vector.push_back(digit);
    }

    return vector;
}

void print(std::vector<int> vector) {
    for (int element : vector) {
        std::cout << element << " ";
    }

    std::cout << std::endl;
}