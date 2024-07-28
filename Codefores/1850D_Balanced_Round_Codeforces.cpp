#define lli long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    lli t;
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i]; 
        } 
        sort(a.begin(), a.end());
        int cnt = 1, ans = 1;
        for(int i = 1; i < n; ++i) {
            if(a[i] - a[i - 1] > k) {
                cnt = 1;
            } else {
                cnt++;
            }
            ans = max(ans, cnt);
        }
        cout << n - ans <<endl;
    }
}
