#include <iostream>
#include <array>

// ongoing...
using namespace std;

int main() {
    int limit{0}, res{0}, num, count1{0}, count2{0}, count3{0};

    cin >> limit;

    int res_arr[5000/3][3];
    int ind_arr[3];

    for (int i = 1; i <= limit; i++) {
        cin >> num;

        count1 += num == 1 ? 1 : 0;
        ind_arr[0] = num == 1 ? i : ind_arr[0];
        count2 += num == 2 ? 1 : 0;
        ind_arr[1] = num == 2 ? i : ind_arr[1];
        count3 += num == 3 ? 1 : 0;
        ind_arr[2] = num == 3 ? i : ind_arr[2];

        if (count1 && count2 && count3) {
            res += 1;            
            res_arr[res-1][0] = ind_arr[0];
            res_arr[res-1][1] = ind_arr[1];
            res_arr[res-1][2] = ind_arr[2];
            count1--; count2--; count3--;
        }
    }

    cout << res << endl;
    for (int i = 0; i < res; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res_arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}