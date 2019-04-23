#include <iostream>
#include <cstring>

void reverse(char*);

int main() {
    char word[100];
    std::cin >> word;

    reverse(word);

    std::cout << word;

    return 0;
}

void reverse(char* arr) {
    for (int i = 0; i < strlen(arr) / 2; ++i) {
        char temp = arr[i];
        arr[i] = arr[strlen(arr) - 1 - i];
        arr[strlen(arr) - 1 - i] = temp;
    }
}