#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, v, l, n;
        cin >> a >> v >> l >> n;

        if (v <= n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
