#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <algorithm>

int main() {
    std::map<std::string, std::string> dict {};    
    std::string key;
    std::string val;
    while(true) {
        std::string input;
        getline(std::cin, input);

        // break if user presses empty line!
        if(input.empty()) break;

        // splitting the string by space!
        std::string separator = " ";
        int start = 0;
        int end = input.find(separator);
        val = input.substr(start, end - start);
        start = end + separator.size();
        end = input.find(separator, start);
        key = input.substr(start, end - start);

        dict [key] = val;
    }

    std::string word;
    while(std::cin >> word) {
        if (dict[word] != "") std::cout << dict[word] << std:: endl;
        else std::cout << "eh" << std::endl;
    }
    
    return 0;
}