#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

bool comp(std::pair<int, int> &x, std::pair<int, int> &y) {
    if(x.first==y.first)
        return (x.second > y.second);
    return (x.first < y.first);
}

int main() {
    int t;
    scanf("%d", &t);
    int num_of_cord;
    int x, y;
    std::vector<std::pair<int, int>> cord;
    while(t--) {
        scanf("%d", &num_of_cord);
        while(num_of_cord--) {
            scanf("%d %d", &x, &y);
            cord.push_back(std::make_pair(x, y));
        }

        std::sort(cord.begin(), cord.end(), comp);
        for(int i=0; i<cord.size(); i++) {
            printf("%d %d\n", cord[i].first, cord[i].second);
        }
        cord.clear();
    }
    return 0;
}