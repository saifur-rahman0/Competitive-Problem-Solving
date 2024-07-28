#define lli long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    lli t;
    cin >> t;
    while(t--){
        lli n, a, q, r=0, f=0;
        string s;
        cin>>n>>a>>q;
        cin >> s;
        if(n == a){
            cout << "YES"<<endl;
            continue;
        }
        r= a;
        for(lli i=0; i<q; i++){
            if(s[i] == '+'){
                r++;
                a++;
            }
            else{
                r--;
            }
            if(r == n){
                f=1;
                break;
            }
        }
        if(f == 1){
            cout << "YES";
        }
        else{
            if(a >= n){
                cout << "MAYBE";
            }
            else{
                cout << "NO";
            }
        }
        cout<<endl;
    }
}
