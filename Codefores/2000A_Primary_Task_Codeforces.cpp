#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string num;
        cin >> num;

        if (num.size() >= 3) {
            if (num[0] == '1' && num[1] == '0') {
                if (num[2] >= '2' || (num.size() >= 4 && num[2] >= '1')) {
                    cout << "YES" << endl;
                } 
                else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
