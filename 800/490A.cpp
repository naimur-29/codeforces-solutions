#include <iostream>

// SOLVED
using namespace std;

int main() {
    int limit, num, res[4][5001], ind[4], ans;

    cin >> limit;
    
    for (int i = 1; i <= limit; i++) {
        cin >> num;
        res[num][ind[num]++] = i;
    }
    ans = min(ind[1], min(ind[2], ind[3]));

    cout << ans << endl;
    for (int i = 0; i < ans; i++) {
        cout << res[1][i] << " " << res[2][i] << " " << res[3][i] << endl;
    }
}