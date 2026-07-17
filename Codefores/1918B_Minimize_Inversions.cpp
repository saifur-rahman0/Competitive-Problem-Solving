

#include<bits/stdc++.h>


using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> per[n];

        for(int i=0; i<n; i++)
            cin >> per[i].first;
        
        for(int i=0; i<n; i++)
            cin >> per[i].second;
        
        sort(per, per+n);

        for(int i=0; i<n; i++)
            cout << per[i].first << " ";
        cout << endl;

        for(auto& p: per)
            cout << p.second << " ";
        cout << endl;

    }
}