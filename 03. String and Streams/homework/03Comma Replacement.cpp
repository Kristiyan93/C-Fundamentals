#include <iostream>
#include <cstring>

int main() {
    char line[100];
    std::cin >> line;

    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] == ',') {
            line[i] = ' ';
        }
    }

    for (int j = 0; j < strlen(line); ++j) {
        std::cout << line[j];
    }

    return 0;
}