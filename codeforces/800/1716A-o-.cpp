#include <iostream>

using namespace std;

int main() {
    int min_min{0}, limit;
    long long int num;

    cin >> limit;

    for (int i = 0; i < limit; i++) {
        cin >> num; 

        if (num % 3 != 0) {
            min_min = num != 1 ? (num / 3) + 1 : 2;
        }
        else min_min = num / 3;

        cout << min_min << endl;
    }

    return 0;
}