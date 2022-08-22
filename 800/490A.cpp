#include <iostream>
#include <array>

// ongoing...
using namespace std;

int main()
{
    int limit{}, res{}, num, count1{}, count2{}, count3{};

    cin >> limit;

    int res_arr[2000][3] {}, ind[3] {};

    for (int i = 1; i <= limit; i++)
    {
        cin >> num;

        count1 += num == 1 ? 1 : 0;
        count2 += num == 2 ? 1 : 0;
        count3 += num == 3 ? 1 : 0;

        for (int j = 0; j < 3; j++)
        {
            if (num == j+1)
            {
                if (!res_arr[ind[j]][j])
                {
                    res_arr[ind[j]][j] = i;
                }
                else
                {
                    ind[j]++;
                    res_arr[ind[j]][j] = i;
                }
            }
        }

        if (count1 && count2 && count3)
        {
            res += 1;
            count1--; count2--; count3--;
        }
    }

    cout << res << endl;
    for (int i = 0; i < res; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res_arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}