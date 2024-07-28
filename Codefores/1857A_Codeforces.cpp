
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, an, count=0;
        cin >> n;
        for(int i=0; i < n; i++){
            cin >> an;
            if(an % 2 != 0){
                count++;
            }
        }
        if(count % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}