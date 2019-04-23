#include <iostream>
#include <map>
#include <string>

int main() {
    int size = 0;
    std::cin >> size;

    std::multimap<std::string, int> peopleByNameWithAge;
    int age;
    std::string name;

    for (int i = 0; i < size; ++i) {
        std::cin >> name >> age;
        peopleByNameWithAge.emplace(name, age);
    }

    std::string filter;
    std::cin >> filter;

    if (filter == "name") {
        std::cin >> name;
        for (auto itr = peopleByNameWithAge.lower_bound(name); itr != peopleByNameWithAge.upper_bound(name); ++itr) {
            std::cout << "name : " << itr->first << " age : " << itr->second << std::endl;
        }
    } else if (filter == "age") {
        std::cin >> age;
        for (const auto& itr : peopleByNameWithAge) {
            if (itr.second == age) {
                std::cout << "name : " << itr.first << " age : " << itr.second << std::endl;
            }
        }
    }

    return 0;
}