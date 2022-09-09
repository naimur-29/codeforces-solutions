#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

int main()
{
    int num_of_map_items, num_of_jobs;
    std::cin >> num_of_map_items >> num_of_jobs;
    
    std::map<std::string, int> money_map {};
    
    for (int i = 0; i < num_of_map_items; i++) {
        int val;
        std::string key;
        std::cin >> key >> val;
        money_map[key] = val;
    }
    
    for (int i = 0; i < num_of_jobs; ++i) {
        int total {};
        std::string target = "blob";
        std::string str {};
        std::vector<std::string> job_desc {};
        while (str != ".") {
            std::cin >> str;
            job_desc.push_back(str);
        }
        
        for (auto const& ele : money_map) {
            total += count(job_desc.begin(), job_desc.end(), ele.first) * ele.second;
        }
        
        std::cout << total << std::endl;
        continue;
    }

    return 0;
}