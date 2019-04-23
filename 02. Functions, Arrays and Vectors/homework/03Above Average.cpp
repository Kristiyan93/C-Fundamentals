#include <iostream>

bool isAbove(int avg, int i);

int main() {
    int size;
    std::cin >> size;

    int array[100];

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
        sum += array[i];
    }

    int avg = sum / size;

    for (int j = 0; j < size; ++j) {
        if (isAbove(avg, array[j])) {
            std::cout << array[j] << " ";
        }
    }

    std::cout << "\n";

    return 0;
}

bool isAbove(int avg, int i) {
    return i >= avg;
}