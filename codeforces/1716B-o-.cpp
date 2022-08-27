#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int test_cases, size;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        cin >> size;
        vector<int> permutation_table (size);
        iota(permutation_table.begin(), permutation_table.end(), 1);

        cout << size << endl;
        for (int j = 0; j < size; j++) {
            if (j != 0) {
                int temp = permutation_table[size - j - 1];
                permutation_table[size - j - 1] = permutation_table[size - j];
                permutation_table[size - j] = temp;
            }

            for (int &num: permutation_table) cout << num << " ";
            cout << endl;
        }
    }

    return 0;
}