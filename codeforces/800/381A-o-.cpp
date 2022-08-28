#include <iostream>
#include <deque>

using namespace std;

int main() {
    int sum1{0}, sum2{0}, num_of_cards, turn_count{0};
    cin >> num_of_cards;

    deque <int> d {};

    for (int i = 0; i < num_of_cards; i++) {
        int num;
        cin >> num;
        d.push_back(num);
    }

    for (int i = 0; i < num_of_cards; i++) {
        turn_count++;
        int m = max(d.front(), d.back());

        if (turn_count % 2) {
            sum1 += m;
        } else {
            sum2 += m;
        }

        m == d.front()
            ? d.pop_front()
            : d.pop_back();
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}