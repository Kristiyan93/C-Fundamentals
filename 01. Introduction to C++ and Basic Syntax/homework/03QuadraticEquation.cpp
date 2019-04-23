#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    double resultD = (b * b) - 4 * a * c;

    if (resultD < 0) {
        std::cout << "no roots" << std::endl;

        return 0;
    }

    if (resultD == 0) {
        double result = -(b / 2 * a);

        std::cout << result << std::endl;

        return 0;
    }

    double resultX1 = (-b + sqrt(resultD)) / (2 * a);
    double resultX2 = (-b - sqrt(resultD)) / (2 * a);

    std::cout << resultX1 << " " << resultX2 << '\n';

    return 0;
}