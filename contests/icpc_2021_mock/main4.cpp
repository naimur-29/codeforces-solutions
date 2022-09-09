#include <iostream>

using namespace std;

int main() {
    int n, count{};
    cin >> n;

    for (int i = 1; i <= n/2; i++) {
        for (int j = 1; j <= n/2; j++) {
            for (int k = 1;  k <= n/2; k++) {
                if (i + k >= j && i + j >= k && j + k >= i) count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}