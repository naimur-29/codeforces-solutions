#include <iostream>

// SOLVED
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    int res{0};

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    // formula:
    res = min(min((k*l) / nl, c*d), p/np) / n;
    cout << res << endl; 

    return 0;
}