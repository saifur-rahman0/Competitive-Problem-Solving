#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

string decode_string(const string &b) {
    set<char> distinct_chars(b.begin(), b.end());
    string r(distinct_chars.begin(), distinct_chars.end());

    int n = r.size();
    unordered_map<char, char> char_map;
    for (int i = 0; i < n; ++i) {
        char_map[r[i]] = r[n - i - 1];
    }

    string s;
    s.reserve(b.size());
    for (char ch : b) {
        s.push_back(char_map[ch]);
    }

    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    vector<string> results;
    results.reserve(t);

    for (int i = 0; i < t; ++i) {
        int n;
        string b;

        cin >> n >> b;

        results.push_back(decode_string(b));
    }

    for (const string &result : results) {
        cout << result << '\n';
    }

    return 0;
}
