#include <iostream>

using namespace std;

int main() {
    long long int num;

    while(cin >> num) {
        if (num == 0) {
            break;
        }
        int d = num % 10;
        num /= 10;
        num -= (5*d);
        if (num % 17 == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}