#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;


    int count = 0;
    int array[100];
    std::vector<int> vector;

    for (int i = 0; i < size; ++i) {
        int num;
        std::cin >> array[i];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            vector.push_back(array[i] * array[j]);
        }
    }

    for (int k = 0; k < vector.size(); ++k) {
        std::cout << vector.at(k) << " ";
    }

    std::cout << std::endl;

    return 0;
}