
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string cl;
    cin >> cl;

    vector<string> cards = {
        "espeon", "abedon", "wasifon", "wafifon", "rakibon", "tamimon", "avason", "emonon", "raiyanon"
    };

    for (string card : cards) {
        if (card.size() != n) continue;

        bool m = true;

        for (int i = 0; i < n; i++) {
            if (cl[i] != '.' && cl[i] != card[i]) {
                m = false;
                break;
            }
        }

        if (m) {
            cout << card << endl;
            return 0;
        }
    }

    return 0;
}

