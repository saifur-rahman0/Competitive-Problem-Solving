#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        long long n, a, b, count = 0;
        vector<long long> v;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (v[i] + v[j] >= a && v[i] + v[j] <= b) {
                    count++;
                }
            }
        }

        cout << "Case " << k << ": " << count << endl;
    }
    return 0;
}