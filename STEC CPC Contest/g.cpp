#include <iostream>
#include<string.h>
using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() % 2){
            cout << "NO" << endl;
            continue;
        }
        long h = s.size() / 2;
        bool sq(true);
        for(long p = 0; p < h; p++){
            if(s[p] != s[h + p]){
                sq = false;
                break;
            }
        }
        cout << (sq ? "YES" : "NO") << endl;
    }

}
