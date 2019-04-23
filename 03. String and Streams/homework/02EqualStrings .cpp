#include <iostream>
#include <cstring>

bool isEqual(std::string*, std::string*);

int main() {
    std::string firstLine;
    std::string secondLine;

    std::cin >> firstLine >> secondLine;

    if (isEqual(&firstLine, &secondLine)) {
        std::cout << "Equal";

        return 0;
    }

    std::cout << "Not Equal";

    return 0;
}

bool isEqual(std::string* first, std::string* second) {
    return *first == *second;
}