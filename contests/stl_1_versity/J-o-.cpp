#include <iostream>
#include <vector>

std::vector<bool> vis(100005, false);

int main(){
    int n, x, count{}, max_count{};
    std::cin >> n;

    for(int i = 0; i < 2*n; i++) {
        std::cin >> x;
        if (!vis[x]) {
            vis[x] = true;
            count++;
            max_count = std::max(max_count, count);
        } else count--;
    }
    std::cout << max_count << std::endl;

    return 0;
}