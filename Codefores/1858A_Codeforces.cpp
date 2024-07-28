#include <iostream>
using namespace std;

int main(){
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(c % 2 == 0){
            if(a>b)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else{
            if(b > a)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }
}
