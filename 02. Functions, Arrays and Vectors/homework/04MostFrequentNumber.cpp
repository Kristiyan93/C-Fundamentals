#include <iostream>
#include <iterator>
#include <map>

void sort(int[], int);

int main() {
    int size;
    int array[100];

    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int digit;

        std::cin >> digit;

        if (digit < 0 || digit > 9) {
            continue;
        }

        array[i] = digit;
    }

    sort(array, size);

    std::map<int, int> map;
    int count = 0;
    int currentNUm = 0;

    for (int i = 0; i < size; i++) {
        if (!map.count(array[i])) {
            map.insert(std::pair<int, int>(array[i], 0));
        }

        map[array[i]]++;
    }

    int maxLen = 0;

    for (auto i = map.begin(); i != map.end(); i++) {
        if (maxLen <= i->second) {
            maxLen = i->second;
        }
    }

    for (auto i = map.begin(); i != map.end(); i++) {
        if (maxLen == i->second) {
            std::cout << i->first << " ";
        }
    }

    std::cout << "\n";

    return 0;
}

void sort(int numbers[], int count) {
    for (int i = 0; i < count - 1; i++) {
        int currentMin = numbers[i];
        int currentMinIndex = i;

        for (int j = i + 1; j < count; j++) {
            if (currentMin > numbers[j]) {
                currentMin = numbers[j];
                currentMinIndex = j;
            }
        }

        if (currentMinIndex != i) {
            numbers[currentMinIndex] = numbers[i];
            numbers[i] = currentMin;

        }
    }
}