#include <iostream>
#include <map>
#include <string>

int main() {
    int size = 0;
    std::cin >> size;

    std::map<int, std::string> map;

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            map[i] = "EVEN";

            continue;
        }

        map[i] = "ODD";
    }

    std::map<int, std::string>::iterator it = map.begin();

    while (it != map.end()) {
        std::cout << "KEY: " << it->first << " " << "VALUE: " << it->second << "\n";
        it++;
    }

    return 0;
}