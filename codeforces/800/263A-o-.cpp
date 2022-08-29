#include <iostream>

using namespace std;

int main() {
    int x, y, num, moves{};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num;
            if (num == 1) {
                x = j; y = i;
                break;
            }
        }
    }

    moves += x > 2 ? x-2 : 2-x;
    moves += y > 2 ? y-2 : 2-y;

    cout << moves << endl;

    return 0;
}