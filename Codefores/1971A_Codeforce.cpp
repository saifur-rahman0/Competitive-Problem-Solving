#include <iostream>


using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, temp;
        cin >> x >> y;

        if(y<x){
            temp = x;
            x=y;
            y=temp;
        }
        cout << x << " " << y << endl;
    }

    return 0;
}
