#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test_cases, given_key;
    vector<int> doors;
    doors.push_back(0);

    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        cin >> given_key;
        for (int j = 1; j <= 3; j++) {
            int temp;
            cin >> temp;
            doors.push_back(temp);
        }

        if (doors.at(doors.at(given_key))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        for (int j = 1; j <= 3; j++) {
            doors.pop_back();
        }
    }

    return 0;
}