#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin >> t;
    for(int z=1; z<=t; z++){
        int a, sum=0;
        lli n;
        cin >> a >> n;
        for(lli i=1; i<=n; i++){
            sum += abs((i%a)- (i% (a-1)) );
        }
        cout << "Case " << z << ": " << sum <<endl;
    }
}