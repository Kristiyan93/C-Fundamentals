#include <iostream>


int main() {
    int row = 0;
    int col = 0;
    int find = 0;

    std::cin >> find;
    std::cin >> row;
    std::cin >> col;

    int **matrix = new int*[row];

    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[col];

        for (int j = 0; j < col; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    bool isFound = false;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrix[i][j] == find) {
                std::cout << i << j << '\n';
                isFound = true;
            }
        }
    }

    if (!isFound) {
        std::cout << "Number not found" << "\n";
    }

    delete[] matrix;
    matrix = nullptr;

    return 0;
}