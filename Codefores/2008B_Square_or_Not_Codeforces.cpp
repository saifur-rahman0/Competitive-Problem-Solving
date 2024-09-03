#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n, optional = 0, sleep = 0;
        string s;
        cin >> n >> s;
        for (char ch : s) {
            if (ch == '0'){
                sleep++;
            }
            else{
                optional++;
            } 
        }


        bool boo = false;
        for (int m = 1; m * m <= n; m++) {
            if (n % m == 0) {
                int c = n / m;
                if (optional == 2 * (m + c - 2) && sleep == (m * c - optional)) {
                    if (m == c) {
                        boo = true;
                        break;
                    }
                }
            }
        }


        if (boo)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    return 0;
}