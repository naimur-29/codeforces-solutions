/*
⠀⠀⠀⠀⣠⣶⡾⠏⠉⠙⠳⢦⡀⠀⠀⠀⢠⠞⠉⠙⠲⡀⠀
⠀⠀⠀⣴⠿⠏⠀⠀⠀⠀⠀⠀⢳⡀⠀ ⡏⠀⠀⠀⠀⠀⢷
⠀⠀⢠⣟⣋⡀⢀⣀⣀⡀⠀⣀⡀⣧⠀⢸⠀⠀⠀⠀⠀ ⡇
⠀⠀⢸⣯⡭⠁⠸⣛⣟⠆⡴⣻⡲⣿⠀⣸⠀mkay.⡇
⠀⠀⣟⣿⡭⠀⠀⠀⠀⠀⢱⠀⠀⣿⠀⢹⠀⠀⠀⠀⠀ ⡇
⠀⠀⠙⢿⣯⠄⠀⠀⠀⢀⡀⠀⠀⡿⠀⠀⡇⠀⠀⠀⠀⡼
⠀⠀⠀⠀⠹⣶⠆⠀⠀⠀⠀⠀⡴⠃⠀⠀⠘⠤⣄⣠⠞⠀
⠀⠀⠀⠀⠀⢸⣷⡦⢤⡤⢤⣞⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣤⣴⣿⣏⠁⠀⠀⠸⣏⢯⣷⣖⣦⡀⠀⠀⠀⠀⠀⠀
⢀⣾⣽⣿⣿⣿⣿⠛⢲⣶⣾⢉⡷⣿⣿⠵⣿⠀⠀⠀⠀⠀⠀
⣼⣿⠍⠉⣿⡭⠉⠙⢺⣇⣼⡏⠀⠀⠀⣄⢸⠀⠀⠀⠀⠀⠀
⣿⣿⣧⣀⣿.........⣀⣰⣏⣘⣆⣀
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int test, current_test = 0;
	cin >> test;

	while (test--) {		
        int n, k;
        cin >> n >> k;
        k++, n++;

        int low = 0, high = 1000000009;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            low = low > a[i] ? low : a[i];
        }

        int res{};
        while (low <= high) {
            int mid = (low + high) / 2;
            int count = 1, current = 0;
            for (int i = 0; i < n; i++) {
                if (current + a[i] > mid) {
                    count++, current = a[i];
                } else {
                    current += a[i];
                }
            }

            if (count <= k) {
                res = mid, high = mid - 1;
            } else {
                low = mid + 1;
            } 
        }
        cout << "Case " << current_test++ + 1 << ": ";
        cout << res << endl;

        int current = 0, count = 1;
        for (int i = 0; i < n; i++) {
            if (current + a[i] <= res && n - i - 1 >= k - count) {
                current += a[i];
            } else {
                cout << current << endl;
                count++;
                current = a[i];
            } 
        }
        cout << current << endl;
	}

	return 0;
}