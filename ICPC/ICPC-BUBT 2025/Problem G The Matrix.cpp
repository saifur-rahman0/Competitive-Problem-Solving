#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> row_xor(n, 0);
        vector<int> col_xor(m, 0);

        vector<vector<int>> A(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                A[i][j] = x;
                row_xor[i] ^= x;
                col_xor[j] ^= x;
            }
        }

        int64 S = 0;
        for (int i = 0; i < n; ++i)
            S += (int64)row_xor[i];
        for (int j = 0; j < m; ++j)
        S += (int64)col_xor[j];

        int best = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int v = row_xor[i] & col_xor[j];
                if (v > best)
                    best = v;
            }
        }

        int64 answer = S - 2LL * (int64)best;
        cout << answer << "\n";
    }
    return 0;
}
