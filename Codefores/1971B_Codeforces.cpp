#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        if (s[0] == s[s.size() - 1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            next_permutation(s.begin(), s.end());
            cout << s << endl;
        }
    }

    return 0;
}
