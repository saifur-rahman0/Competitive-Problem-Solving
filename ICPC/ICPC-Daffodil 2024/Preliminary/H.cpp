#include <iostream>
using namespace std;

const int MOD = 998244353;

long long num_ways_to_color_grid(int N, int M, int K) {
    if (K == 1) {
        if (N == 1 && M == 1) return 1;
        else return 0;
    }
    if (N == 1 && M == 1) return K % MOD;

    long long result = (long long)K * (K - 1) % MOD;
    for (int i = 0; i < N * M - 2; i++) {
        result = result * (K - 2) % MOD;
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        cout << num_ways_to_color_grid(N, M, K) << endl;
    }

    return 0;
}
