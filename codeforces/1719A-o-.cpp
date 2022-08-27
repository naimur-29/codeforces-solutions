#include <iostream>

using namespace std;

int main() {
    long long int sum{0};
    int limit;
    
    cin >> limit;
    for (int i = 0; i < limit; i++) {
        long long int n1, n2;
        cin >> n1 >> n2;
        sum = n1 + n2;

        if (sum % 2 == 0) {
            cout << "Tonya" << endl;
        } else {
            cout << "Burenka" << endl;
        }
    }

    return 0;
}