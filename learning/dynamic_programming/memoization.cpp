#include <iostream>
#include <map>

long long int fib(int n) {
    static std::map<long long int, long long int> memo{};

    if (memo.find(n) != memo.end()) return memo[n];
    else if (n <= 2) return 1;
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int num;
    while(std::cin >> num) {
        std::cout << fib(num) << std::endl;
    }

    return 0;
}