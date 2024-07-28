#include <iostream>
using namespace std;

int main() {
    int x, y, min, max, sum=0;
    cin >> x >> y;
    if(x<y)
    {
        min= x;
        max= y;
    }
    else
    {
        min=y;
        max= x;
    }
    for(int i=(min+1); i<max; i++)
        if(i%2 != 0)
            sum+=i;
    cout<<sum<<endl;
}
