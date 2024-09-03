#include<bits\stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<string> pat(n);

        for (int i = 0; i < n; ++i) {
            cin >> pat[i];
        }

        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < 4; ++j) {
                if (pat[i][j] == '#') {
                    cout << (j + 1) << " ";
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
