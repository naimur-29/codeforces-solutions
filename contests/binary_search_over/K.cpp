
// ⠀⠀⠀⠀⣠⣶⡾⠏⠉⠙⠳⢦⡀⠀⠀⠀⢠⠞⠉⠙⠲⡀⠀
// ⠀⠀⠀⣴⠿⠏⠀⠀⠀⠀⠀⠀⢳⡀⠀ ⡏⠀⠀⠀⠀⠀⢷
// ⠀⠀⢠⣟⣋⡀⢀⣀⣀⡀⠀⣀⡀⣧⠀⢸⠀⠀⠀⠀⠀ ⡇
// ⠀⠀⢸⣯⡭⠁⠸⣛⣟⠆⡴⣻⡲⣿⠀⣸⠀mkay.⡇
// ⠀⠀⣟⣿⡭⠀⠀⠀⠀⠀⢱⠀⠀⣿⠀⢹⠀⠀⠀⠀⠀ ⡇
// ⠀⠀⠙⢿⣯⠄⠀⠀⠀⢀⡀⠀⠀⡿⠀⠀⡇⠀⠀⠀⠀⡼
// ⠀⠀⠀⠀⠹⣶⠆⠀⠀⠀⠀⠀⡴⠃⠀⠀⠘⠤⣄⣠⠞⠀
// ⠀⠀⠀⠀⠀⢸⣷⡦⢤⡤⢤⣞⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⢀⣤⣴⣿⣏⠁⠀⠀⠸⣏⢯⣷⣖⣦⡀⠀⠀⠀⠀⠀⠀
// ⢀⣾⣽⣿⣿⣿⣿⠛⢲⣶⣾⢉⡷⣿⣿⠵⣿⠀⠀⠀⠀⠀⠀
// ⣼⣿⠍⠉⣿⡭⠉⠙⢺⣇⣼⡏⠀⠀⠀⣄⢸⠀⠀⠀⠀⠀⠀
// ⣿⣿⣧⣀⣿.........⣀⣰⣏⣘⣆⣀


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long int n, zero = 0;
    cin >> n;

    vector<long long int> a(n), b(n), diff, pos, neg;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++) {
        diff.push_back(a[i] - b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (diff[i] > 0)
            pos.push_back(diff[i]);
        else if (diff[i] < 0)
            neg.push_back(abs(diff[i]));
        else
            zero++;
    }
    sort(neg.begin(), neg.end());

    long long int ans = 0;
    long long int val = pos.size();
    ans += val*(val - 1) / 2;
    ans += pos.size() * zero;

    if (neg.size() == 0) {
        std::cout << ans << endl;
        return 0;
    }
    
    for (int i = 0; i < pos.size(); i++) {
        auto it = lower_bound(neg.begin(), neg.end(), pos[i]);
        if (it == neg.end()) {
            ans += neg.size();
        } else {
            long long int ind = it - neg.begin();
            ind--;

            if (ind >= 0) {
                ans += ind + 1;
            }
        }
    }
    std::cout << ans << endl;

    return 0;
}