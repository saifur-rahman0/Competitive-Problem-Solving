#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        long long sum = 0;

        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << sum / n << "\n";
    }

    return 0;
}
