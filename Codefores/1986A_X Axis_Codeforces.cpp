#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int min_fa = INT_MAX;

        for (int a = 1; a <= 10; ++a) {
            int fa = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);
            if (fa < min_fa) {
                min_fa = fa;
            }
        }
        cout << min_fa << endl;
    }

    return 0;
}
