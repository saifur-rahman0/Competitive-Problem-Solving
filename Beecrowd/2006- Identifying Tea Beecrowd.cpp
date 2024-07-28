#include <iostream>
using namespace std;

int main()
{
    int t, cp, count=0;
    cin >> t;
    for(int i=0; i<5; i++)
    {
        cin >> cp;
        if(t== cp)
            count++;
    }
    cout << count << endl;
}

