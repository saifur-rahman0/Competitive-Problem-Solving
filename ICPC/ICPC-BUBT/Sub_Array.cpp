#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli test;
    cin>>test;
    lli cs=0;
    while(test--)
    {
        lli n;
        cin >> n;
        lli count=1, t=0, b=0;
        lli arr[n];
        for(lli i=0; i<n; i++)
        cin >> arr[i];
        t=(n*(n+1))/2;
        for(lli i=1; i<n; i++)
        {
            if(arr[i-1]==arr[i]) 
                count++;
            else{
                b+=(count*(count+1))/2;
                count=1;
            }
        }
    b+=(count*(count+1))/2;
    cs++;
    cout<<"Case "<<cs<<": "<<t-b<<endl;
    }
}