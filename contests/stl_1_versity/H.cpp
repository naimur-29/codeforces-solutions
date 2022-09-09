#include <iostream>
#include <vector>

int main() {
    std::vector<long long int> arr{};

    long long int num;
    while(std::cin >> num) {
        if (num == '\n') break;
        arr.push_back(num);
    }

    for (auto const& ele: arr) {
        std::cout << ele << " ";
    }

    return 0;
}