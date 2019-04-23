#include <iostream>


int main() {
    int row = 0;
    int col = 0;
    int count = 0;

    std::cin >> row;
    std::cin >> col;

    int **matrix = new int*[row];

    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[col];

        for (int j = 0; j < col; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrix[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    delete[] matrix;
    matrix = nullptr;

    std::cout << count;

    return 0;
}