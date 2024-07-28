#define lli long long int
#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        lli n; cin >> n;
        lli a[n + 2], mx = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        sort(a, a + n);
        if (mx == a[0])cout << -1 << endl;
        else {
            std::vector<lli> v1, v2;
            for (int i = 0; i < n; i++) {
                if (a[i] != mx)v1.push_back(a[i]);
                else v2.push_back(a[i]);
            }
            cout << v1.size() << " " << v2.size() << endl;
            for (auto it : v1) {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : v2) {
                cout << it << " ";
            }
            cout << endl;
        }
    }
        
}
