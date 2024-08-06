#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> brk(n);
        for (int i = 0; i < n; ++i) {
            cin >> brk[i].first >> brk[i].second;
        }
        
        bool shower = false;
        
        if (brk[0].first >= s) {
            shower = true;
        }
        
        for (int i = 1; i < n; ++i) {
            if (brk[i].first - brk[i - 1].second >= s) {
                shower = true;
                break;
            }
        }
        
        if (m - brk[n - 1].second >= s) {
            shower = true;
        }
        
        if (shower) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
