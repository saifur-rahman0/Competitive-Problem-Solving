#include <iostream>
#include <string>
#include <map>
using namespace std;

int testcase() {
    int x;
    cin >> x;
    return x;
}

pair<int, int> MII() {
    int x, y;
    cin >> x >> y;
    return {x, y};
}

int main() {
    int t = 1;
    t = testcase();
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;

        string str = "ABCDEFG";
        map<char, int> cnt;

        for (char c : str) {
            cnt[c] = 0;
        }

        string temp;
        cin >> temp;
        for (char i : temp) {
            cnt[i]++;
        }

        int ans = 0;

        for (auto i : cnt) {
            if (i.second < m) {
                ans += m - i.second;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
