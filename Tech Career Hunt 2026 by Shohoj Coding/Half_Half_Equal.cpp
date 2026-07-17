#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    string s = to_string(N);
    int D = s.size();

    long long ans = 0;

    for (int k = 1; k <= 6; k++) {
        if (2 * k > D) break;

        long long low = pow(10, k - 1);
        long long high = pow(10, k) - 1;

        if (2 * k < D) {
            ans += (high - low + 1);
        }
        else {
            string A_str = s.substr(0, k);
            string B_str = s.substr(k, k);

            long long A = stoll(A_str);
            long long B = stoll(B_str);

            long long cnt = 0;

            if (A > high) {
                cnt += (high - low + 1);
            } else {
                cnt += max(0LL, A - low);

                if (A >= low && A <= high && B >= A) {
                    cnt += 1;
                }
            }

            ans += cnt;
        }
    }

    cout << ans << "\n";

    return 0;
}
