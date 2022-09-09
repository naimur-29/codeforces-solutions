#include <iostream>
#include <vector>

bool binary_search(const std::vector<long long int>& sorted_vec, long long int key) {
    size_t mid, left = 0 ;
    size_t right = sorted_vec.size();
    while (left < right) {
        mid = left + (right - left)/2;
        if (key > sorted_vec[mid]){
            left = mid+1;
        }
        else if (key < sorted_vec[mid]){                                        
            right = mid;
        }
        else {
            return true;
        }                                         
    }
    return false;      
}

int main() {
    long long int n, m;
    std::cin >> n >> m;
    while (true) {
        if (!n && !m) break;
        if (n == 0 || m == 0) {
            std::cout << "0" << std::endl;
        }
        else {
            int count{};
            std::vector<long long int> nvec{};
            for (long long int i = 0; i < n; ++i) {
                long long int num;
                std::cin >> num;
                nvec.push_back(num);
            }

            for (long long int i = 0; i < m; ++i) {
                long long int num;
                std::cin >> num;
                if (binary_search(nvec, num)) {
                    count++;
                }
            }
            std::cout << count << std::endl;
        }
        std::cin >> n >> m;
    }
    return 0;
}