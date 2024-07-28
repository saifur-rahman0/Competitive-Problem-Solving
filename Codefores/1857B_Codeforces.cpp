#define ll long long

#include <iostream>
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
       string num;
       cin>>num ;
       int i, size = num.size(), pos= size;
       for(i= size-1; i>=1; i--){
            if(num[i] >= '5'){
                num[i-1]++;
                pos= i;
            }
       }
       for(i= pos; i< size; i++){
            num[i]= '0';
       }
       if(num[0] >= '5'){
            cout << '1';
            for(i=0; i< size; i++){
                cout << '0';
            }
            cout << endl;
       }
       else
            cout << num << endl;

    }
}