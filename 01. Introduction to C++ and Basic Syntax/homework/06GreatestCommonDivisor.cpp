#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int smallDigit = (a < b) ? a : b;
    int bigDigit = (a > b) ? a : b;

    while (a != b && smallDigit != 0) {
        unsigned r = bigDigit % smallDigit;
        bigDigit = smallDigit;
        smallDigit = r;
    }

    std::cout << bigDigit << "\n";

    return 0;
}