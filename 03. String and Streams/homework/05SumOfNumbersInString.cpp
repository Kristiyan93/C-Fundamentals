#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cin >> input;

    int result = 0;

    for (int i = 0; i < input.size(); ++i) {
        if (isdigit(input[i])) {
            int a = input[i] - '0';

            result += a;
        }
    }

    std::cout << result << std::endl;

    return 0;
}