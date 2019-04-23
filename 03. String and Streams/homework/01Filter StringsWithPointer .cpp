#include <iostream>
#include <string>

void printDigits(const std::string*);

int main() {
    std::string str;
    std::cin >> str;

    printDigits(&str);

    return 0;
}

void printDigits(const std::string * string) {
    for (int i = 0; i < string->length(); ++i) {
        if (isdigit(string->at(i))) {
            std::cout << string->at(i);
        }
    }
}