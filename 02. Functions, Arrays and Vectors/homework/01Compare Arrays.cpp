#include <iostream>

bool areEqual(int[], int, int[], int);

int main() {
    int firstNum;
    int secNum;

    std::cin >> firstNum;

    int firstArr[100];

    for (int i = 0; i < firstNum; ++i) {
        std::cin >> firstArr[i];
    }

    std::cin >> secNum;

    int secondArr[100];

    for (int j = 0; j < secNum; ++j) {
        std::cin >> secondArr[j];
    }

    if (areEqual(firstArr, firstNum, secondArr, secNum)) {
        std::cout << "equal\n";
    } else {
        std::cout << "Not equal\n";
    }

    return 0;
}

bool areEqual(int arr1[], int length1, int arr2[], int lenght2) {
    if (length1 == lenght2) {
        for (int i = 0; i < length1; ++i) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }

        return true;
    }

    return false;
}