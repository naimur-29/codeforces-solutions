#include <iostream>
#include <string>
#include <map>

int main() {
    int n, t;
    std::map<std::string, std::string> figures{};

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string num1, num2, name;
        std::cin >> num1 >> num2;
        std::getline(std::cin, name);
        std::string fig = num1 + " " + num2;

        figures[fig] = name.substr(1, name.size());
    }

    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        std::string num1, num2;
        std::cin >> num1 >> num2;
        std::string fig = num1 + " " + num2;

        if (figures[fig] != "") std::cout << figures[fig] << std::endl;
        else std::cout << "(puzzled)" << std::endl;
    }

    return 0;
}