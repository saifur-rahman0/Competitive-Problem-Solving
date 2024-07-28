#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin >> t;
    for(int z=1; z<=t; z++){
        int a, sum=0;
        lli n, i=1;
        cin >> a >> n;
        
        L:
        i++;
        sum += abs((i%a)- (i% (a-1)) );
        if(i<=n)
            goto L;
        cout << "Case " << z << ": " << sum <<endl;
    }
}