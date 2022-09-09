#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int m = min(min(a, b), c);
    int ma = max(max(a, b), c);

    if (m != 1) {
        cout << a*b*c << endl;
    } else {
        if (ma == a) cout << a*(b+c) << endl;
        if (ma == b) cout << b*(a+c) << endl;
        if (ma == c) cout << c*(b+a) << endl;
    }

    return 0;
}