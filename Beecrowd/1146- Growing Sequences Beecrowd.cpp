#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
   int a,b;
    while(1)
    {

        cin >> a;
        if(a==0) break;
        else
        {
            for(b=1; b<a; b++)
                cout << b << " ";
        }
        cout << a << endl;
    }
    return 0;
}
