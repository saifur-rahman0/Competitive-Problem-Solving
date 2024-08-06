#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, f_num, s_num, sum;
    cin >> t;
    while(t--)
    {
        cin >> n;
        f_num= n % 10;
        s_num= n / 10;

        sum = f_num + s_num;
        cout << sum << endl;
    }
    
    return 0;
}