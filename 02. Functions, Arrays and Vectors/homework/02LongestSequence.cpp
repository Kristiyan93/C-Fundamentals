#include <iostream>

int main() {
    int num;
    int array[100];

    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> array[i];
    }

    if (num == 1) {
        std::cout << array[0] << "\n";
    }

    int start = 0;
    int length = 0;
    int end = -1;

    for (int i = 1; i < num; i++) {
        if (array[i - 1] != array[i]) {
            end = i - 1;
        }

        if (i - end >= length) {
            length = i - end;
            start = end + 1;
        }
    }

    for (int i = start; i < start + length; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\n";

    return 0;
}