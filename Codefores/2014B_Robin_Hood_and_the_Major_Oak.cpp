#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long n,k;
        cin >> n >> k;

        long long help= n-k, even= 0;

        even+=(n*(n+1))/2;
        even-=(help*(help+1))/2;

        if(even % 2 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}