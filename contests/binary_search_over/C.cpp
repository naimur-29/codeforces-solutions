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
#include <algorithm>

using namespace std;

long long int v[1000001];
long long int n, k;

long long int binary_search (long long int low, long long int high) {
    long long int mid, target, minim = 0;
    while (low <= high) {
        mid = (low + high) / 2;

        target = 0;
        for (long long int i = 0; i < n; i++) {
            if(v[i] - mid > 0) {
                target += v[i] - mid;
            } else {
                break;
            }
        }

        if (target == k) {
            return mid;
        } else if (target > k) {
            low = mid + 1;
            minim = max(minim, mid);
        } else {
            high = mid - 1;
        }
    }
    return minim;
}

int main() {
    cin >> n >> k;
    long long int i;

    for(i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v,v+n, greater<long long int>());

    cout << binary_search(0, v[0]);

	return 0;
}
