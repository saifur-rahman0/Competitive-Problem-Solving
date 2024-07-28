#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            a.push_back(val);
        }

        int fvrt = a[f - 1];

        sort(a.rbegin(), a.rend());

        if (fvrt > a[k - 1]) {
            cout << "YES" << endl;
        } else if (fvrt == a[k - 1]) {
            if (k == n || a[k] != fvrt) {
                cout << "YES" << endl;
            } else {
                cout << "MAYBE" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
