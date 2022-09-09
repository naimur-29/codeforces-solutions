#include <iostream>

using namespace std;

int main() {
    int t, a, b, l;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> l;
        int m {}, tot{};
        for (int j = 0; j < l-1; j++) {
            cin >> a >> b;
            tot += a;
            tot -= b;
            m = max(m, tot);
        }
        cout << "Case " << i << ": " << m << endl;
    }

    return 0;
}